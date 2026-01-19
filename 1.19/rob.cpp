class Solution {
    public:
        int rob(vector<int>& nums) {
            int n = nums.size();
            if(n==1)
            return nums[0];
            if(n==2)
            return max(nums[0],nums[1]);
    
            vector<int> maxrob(n);
            maxrob[0] = nums[0];
            maxrob[1] = max(nums[0],nums[1]);
            for(int i{2};i<n;i++)
            {
                maxrob[i] = max(maxrob[i-1],maxrob[i-2]+nums[i]);
    
            }
            return maxrob[n-1];
        }
    };
    