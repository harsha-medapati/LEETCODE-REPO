class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int i,j;
        for(i=0;i<image[0].size();i++)
        {
            reverse(image[i].begin(),image[i].end());
            for(j=0;j<image[i].size();j++)
            {
                if(image[i][j] == 1) image[i][j] = 0;
                else if(image[i][j] == 0) image[i][j] = 1;
            }
        }
        return image;
    }
};