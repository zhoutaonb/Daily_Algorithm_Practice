class Solution {
public:
    int find_min(int tar,vector<int>& nums,int begin)
    {
        int ans = begin; 
        int min = nums[begin];
        for(auto i = begin;i<nums.size();i++)
        {
            if(nums[i]<min&&nums[i]>tar)
            {
                min = nums[i];
                ans = i;
            }
        }
        return ans;
    }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n<=1)
        return;
        for(auto i{n-1};i>0;i--)
        {

            if(nums[i]>nums[i-1])
            {
                int tar = find_min(nums[i-1],nums,i);
                swap(nums[tar],nums[i-1]);
                reverse(nums.begin()+i,nums.end());
                return;
            }
        }
        reverse(nums.begin(),nums.end());
    }
};
class Solution {
public:
    int find_min(int tar,vector<int>& nums,int begin)
    {
        int ans = begin; 
        int min = nums[begin];
        for(auto i = begin;i<nums.size();i++)
        {
            if(nums[i]<min&&nums[i]>tar)
            {
                min = nums[i];
                ans = i;
            }
        }
        return ans;
    }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n<=1)
        return;
        for(auto i{n-1};i>0;i--)
        {

            if(nums[i]>nums[i-1])
            {
                int tar = find_min(nums[i-1],nums,i);
                swap(nums[tar],nums[i-1]);
                sort(nums.begin()+i,nums.end());
                return;
            }
        }
        reverse(nums.begin(),nums.end());
    }
};
