class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n=arr.size();
        int count=0,ans=0,last=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                long long int sum=arr[i]+arr[j];
                count=2;
                last=arr[j];
                while(binary_search(arr.begin(),arr.end(),sum))
                {
                    long long int temp=sum;
                    count++;
                    sum=last+sum;
                    last=temp;
                }
                    ans=max(ans,count);
            }
        }
        if(ans==2)
        return 0;
        else
        return ans;
    }
};