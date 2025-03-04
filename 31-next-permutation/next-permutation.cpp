class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int dip=-1,small=0,smallindex=-1;
        for(int i=n-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {
            dip=i-1;
            break;
            }
        }
        if(dip==-1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i=n-1;i>dip;i--)
        {
            if(nums[i]>nums[dip])
            {
                swap(nums[i],nums[dip]);
                break;
            }
        }
        reverse(nums.begin()+dip+1,nums.end());
    }
};