class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
      int n=nums.size();
        long long mxx = LLONG_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                long long value = (1LL * (nums[i] - nums[j]) * nums[k]); 
                mxx = max(mxx, value);

                }
            }
        }
        return mxx>0?mxx:0;
    }
};