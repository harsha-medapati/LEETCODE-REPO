class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i;
        stack<char>ss,st;
        for(i=0;i<s.size();i++)
        {
            if(s[i] == '#')
            {
                if(!ss.empty())
                {
                    ss.pop();
                }
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
        for(i=0;i<t.size();i++)
        {
            if(t[i] == '#')
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
            else
            {
                st.push(t[i]);
            }
        }
        t.clear();
        while(!st.empty())
        {
            t.push_back(st.top());
            st.pop();
        }
        if(s == t) return 1;
        return 0;
    }
};