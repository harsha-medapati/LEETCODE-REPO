class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>ss;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(!ss.empty() && ss.top() == s[i])
            {
                ss.pop();
                continue;
            }
            else
            {
                ss.push(s[i]);
            }
        }
        s.clear();
        while(!ss.empty())
        {
            s.push_back(ss.top());
            ss.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};