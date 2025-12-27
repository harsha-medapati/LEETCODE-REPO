class Solution {
public:
    int sum(int n) {
        int add = 0;
        while(n > 0)
        {
            int temp = n%10;
            add += temp;
            n = n/10;
        }
        return add;
    }
    int countBalls(int l, int h) {
        int freq[46] = {0};
        for(int i=l;i<=h;i++)
        {
            int res = sum(i);
            freq[res]++;
        }
        int ans = 0;
        for(int i=0;i<46;i++)
        {
            if(ans < freq[i])
            {
                ans = freq[i];
            }
        }
        return ans;
    }
};