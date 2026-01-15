class Solution {
public:
    // void exchange(int& a,int& b)
    // {
    //     a ^= b;
    //     b ^= a;
    //     a ^= b;
    // }
    void sortColors(vector<int>& nums) {
        int red_count = 0;
        int blue_count = 0;
        int n = nums.size();
        if(n<2)
        {
            return;
        }
        for(int i{0};i<n;i++)
        {
            if(nums[i]==0&&i!=red_count)
            {
                swap(nums[i],nums[red_count]);
                red_count++;
                i--;
            }
            if(nums[i]==2&&i!=n-1)
            {
                swap(nums[i],nums[n-1]);
                blue_count++;
                n--;
                i--;
            }
        }
    }
};