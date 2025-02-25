class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        int MOD=1000000007;
        int odd=0;
        int even=0;
        int count=0;
        int prefsum=0;
        for(int i=0;i<n;i++)
        {
            prefsum+=arr[i];
            if(prefsum%2==0)
            {
                even++;
                count=(count+odd)%MOD;
            }
            else
            {
                odd++;
                count=(count+even+1)%MOD;
            }
        }
        return count;
    }
};