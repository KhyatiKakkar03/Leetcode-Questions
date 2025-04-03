class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefsum(n,0);
        vector<int> suffsum(n,0);
        prefsum[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefsum[i]=max(prefsum[i-1],nums[i-1]);
        }
        suffsum[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suffsum[i]=max(nums[i+1],suffsum[i+1]);
        }
        long long mxx=LONG_LONG_MIN;
        for(int i=1;i<n-1;i++)
        {
           
                    long long ans=(1L*(prefsum[i]-nums[i])*suffsum[i]);
                    mxx=max(mxx,ans);
                
        }
        return mxx>0?mxx:0;
    }
};