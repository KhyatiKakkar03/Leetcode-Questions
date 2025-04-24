class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int l=0,r=0;
        unordered_map<int,int> distinct;
        for(int i=0;i<n;i++)
        {
            distinct[nums[i]]++;
        }
        int sz=distinct.size();
        distinct.clear();
        int subarrays=0;
        while(r<n)
        {
            if(distinct[nums[r]]==0)
            {
                count++;
            }
            distinct[nums[r]]++;
            while(count==sz)
            {
                subarrays+=(n-r);
                distinct[nums[l]]--;
                if(distinct[nums[l]]==0)
                {
                distinct.erase(nums[l]);
                count--;
                }
                l++;
            }
            r++;
        }
        return subarrays;
    }
};