class Solution {
public:
    vector<string> buildArray(vector<int>& t, int n) {
        int i,maxi = t[t.size()-1];
        vector<string>ans;
        for(i=1;i<=maxi;i++)
        {
            if(find(t.begin(),t.end(),i) != t.end())
            {
                ans.push_back("Push");
            }
            else
            {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};