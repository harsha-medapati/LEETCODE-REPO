class Solution {
public:
    int calPoints(vector<string>& o) {
        int i,ans=0;
        vector<int>v;
        for (i = 0; i < o.size(); i++)
        {
            if(o[i] == "+" && v.size() > 1)
            {
                int n = v.size() - 1;
                v.push_back(v[n] + v[n - 1]);
            }
            else if(o[i] == "+" && v.size() == 1) 
            {
                v.push_back(v[0]);
            }
            else if(o[i] == "D") 
            {
                v.push_back(v[v.size() - 1] * 2);
            }
            else if(o[i] == "C") 
            {
                v.pop_back();
            }
            else 
            {
                v.push_back(stoi(o[i]));
            }
        }
        for(auto i:v) ans+=i;
        return ans;
    }
};