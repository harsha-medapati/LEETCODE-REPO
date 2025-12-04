class Solution {
public:
    string removeStars(string s1) {
        stack<char>s;
        int i;
        for(i=0;i<s1.size();i++)
        {
            char ch = s1[i];
            if(ch == '*')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
        string ans;
        while(!s.empty())
        {
            char ch = s.top();
            ans.push_back(ch);
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};