class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        for(int i:nums1) if(find(nums2.begin(),nums2.end(),i) != nums2.end()) return i;
        int min1=*min_element(nums1.begin(),nums1.end()),min2=*min_element(nums2.begin(),nums2.end());
        return (min(min1,min2))*10+max(min1,min2);
    }
};