class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int i,ans=1,c=1;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                continue;
            }
            if(nums[i] == nums[i+1]-1)
            {
                c++;
            }
            else
            {
                ans = max(ans,c);
                c = 1;
            }
        }
        ans = max(ans,c);
        return ans;
    }
};