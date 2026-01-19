class Solution {
    public:
        int rob(vector<int>& nums) {
            int n = nums.size();
            if(n==1)
            return nums[0];
            if(n==2)
            return max(nums[0],nums[1]);
            int pre=nums[0];
            int now = max(nums[0],nums[1]);
            int temp;
            for(int i{2};i<n;i++)
            {
                temp = now;
               now = max(pre+nums[i],now);
               pre = temp;
            }
            return now;
        }
    };
    