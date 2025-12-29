class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        long long ans = INT_MIN;
        vector<long long>v;
        vector<int>a(n);
        a[n-1] = nums[n-1];
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            v.push_back(v[i-1] + nums[i]);
        }
        for(int i=nums.size()-2;i>=0;i--)
        {
            a[i] = min(nums[i],a[i+1]);
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            long long p = v[i];
            int s = a[i+1];
            ans = max(ans,(p-s));
        }
        return ans;
    }
};