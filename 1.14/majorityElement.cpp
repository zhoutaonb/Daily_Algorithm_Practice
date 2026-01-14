class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ans = nums[0];
        for(int i{0};i<nums.size();i++)
        {
            if(nums[i]==ans)
            {
                count++;
            }
            else{
                count--;
            }
            if(count <= 0)
            {
                ans = nums[i];
                count = 1;
            }
        }
        return ans;
    }
};
