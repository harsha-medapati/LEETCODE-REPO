class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string>ans;
        int i;
        string s = "";
        for(i=0;i<target.size();i++)
        {
            s.push_back('a');
            while(s[i] != target[i])
            {
                ans.push_back(s);
                s[i] += 1;
            }
            ans.push_back(s);
        }
        return ans;
    }
};