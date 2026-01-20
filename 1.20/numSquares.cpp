class Solution {
    public:
        void find_min(vector<int>& ans,int n)
        {
            int k = sqrt(n);
            if((k*k)==n)
            {ans[n]=1;return;}
            int min_sum{n};
            for(auto i{1};i<=(n/2);i++)
            {
                if((ans[n-i]+ans[i])<min_sum)
                {
                    min_sum = ans[n-i]+ans[i];
                }
            }
            ans[n]=min_sum;
        }
        int numSquares(int n) {
            vector<int> ans(n+1);
            ans[0]=0;
            ans[1]=1;
            for(auto i{2};i<=n;i++)
            {
                find_min(ans,i);
            }
            return ans[n];
        }
    };
    