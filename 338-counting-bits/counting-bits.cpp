class Solution {
public:

    string bit(int n) {
        string ans;
        while(n > 0) {
            ans += to_string(n%2);
            n = n/2;
        }
        return ans;
    }

    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<n+1;i++)
        {
            string s = bit(i);
            int c = count(s.begin(),s.end(),'1');
            ans.push_back(c);
        }
        return ans;
    }
};