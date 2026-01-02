class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> s;
        s.push(a[0]);
        int i = 1;
        while(i < a.size()) {
            if(a[i] < 0) {
                while(!s.empty() && s.top() > 0 && s.top() < -a[i]) {
                    s.pop();
                }
                if(!s.empty() && s.top() == -a[i]) {
                    s.pop();
                    i++;
                }
                else if(!s.empty() && s.top() > -a[i]) {
                    i++;
                }
                else {
                    s.push(a[i]);
                    i++;
                }
            }
            else {
                s.push(a[i]);
                i++;
            }
        }
        vector<int>ans;
        while(!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};