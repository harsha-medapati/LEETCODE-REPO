class Solution {
public:
    int minimumRefill(vector<int>& p, int a, int b) {
        int i=0,j=p.size()-1,ans=0,m=a,n=b;
        while(i <= j)
        {
            if(i==j)
            {
                if((m >= n))
                {
                    if(m < p[i])
                    {
                        m += a;
                        ans += 1;
                    }
                    m -= p[i];
                    break;
                }
                if(n >= m)
                {
                    if(n < p[j])
                    {
                        n += b;
                        ans += 1;
                    }
                    n -= p[j];
                    break;
                }
            }
            if(m < p[i])
            {
                m = a;
                ans += 1;
            }
            if(n < p[j])
            {
                n = b;
                ans += 1;
            }
            if(m >= p[i])
            {
                m -= p[i];
                i++;
            }
            if(n >= p[j])
            {
                n -= p[j];
                j--;
            }
        }
        return ans;
    }
};