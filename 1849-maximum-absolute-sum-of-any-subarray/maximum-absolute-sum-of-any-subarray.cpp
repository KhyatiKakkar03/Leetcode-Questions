class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int minn=INT_MAX,mxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            minn=min(minn,nums[i]);
            mxx=max(mxx,nums[i]);
        }
        int sum1=0,sum2=0;
        int maxi=minn;
        int mini=mxx;
        for(int i=0;i<n;i++)
        {
            sum1+=nums[i];
            if(sum1>maxi)
            {
                maxi=sum1;
            }
            if(sum1<0)
            sum1=0;
        }
         for(int i=0;i<n;i++)
        {
            sum2+=nums[i];
            if(sum2<mini)
            {
                mini=sum2;
            }
            if(sum2>0)
            sum2=0;
        }
        return max(abs(maxi),abs(mini));
    }
};