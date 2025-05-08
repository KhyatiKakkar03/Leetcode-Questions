class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n=arr.size();
        int l=0,r=n-1;
        int slope=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(((mid==0)||arr[mid-1]<arr[mid])&&((mid==n-1)||arr[mid]>arr[mid+1]))
            {
                slope=mid;
                break;
            }
            else if(arr[mid]<arr[mid+1])
            {
                l=mid+1;
            }
            else if(arr[mid-1]>arr[mid])
            r=mid-1;

        }
        return slope;
    }
};