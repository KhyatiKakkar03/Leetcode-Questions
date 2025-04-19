class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long count=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           int lwr=lower-nums[i];
           int upr=upper-nums[i];
           count+=upper_bound(nums.begin()+(i+1),nums.end(),upr)-lower_bound(nums.begin()+(i+1),nums.end(),lwr);
        }
        return count;
    }
};