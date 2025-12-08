class Solution {
public:
    int countTriples(int n) {
        int i,j,c=0;
        unordered_set<float>s;
        for(i=1;i<=n;i++) s.insert(i);
        for(i=1;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                float k = (i*i)+(j*j);
                k = sqrt(k);
                cout<<k<<" ";
                if(s.find(k) != s.end()) c++;
            }
        }
        return c*2;
    }
};