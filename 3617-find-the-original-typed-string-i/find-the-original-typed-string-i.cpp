class Solution {
public:
    int possibleStringCount(string word) {
        int i,ans=1;
        for(i=0;i<word.size()-1;i++)
        {
            if(word[i] == word[i+1]) ans++;
        }
        return ans;
    }
};