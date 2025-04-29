class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int mxx=nums[0];
        for(int i=1;i<n;i++)
        {
            mxx=max(mxx,nums[i]);
        }
        int l=0,r=0;
        long long count=0,countmax=0;
        while(r<n)
        {
            if(nums[r]==mxx)
            {
                countmax++;
                
            }
            while(countmax>=k)
            {
                count+=(n-r);
                if(nums[l]==mxx)
                {
                    countmax--;
                }
                l++;
            }

            r++;
        }
        return count;
    }
};