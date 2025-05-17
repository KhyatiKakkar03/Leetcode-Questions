class Solution {
public:
    void sortColors(vector<int>& nums) {
        int maxx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
           maxx=max(maxx,nums[i]);
        }
        int *arr=new int[maxx+1];
        for(int i=0;i<maxx+1;i++)
        arr[i]=0;
        for(int i=0;i<nums.size();i++)
        {
             arr[nums[i]]++;
        }
        int i=0,j=0;
        while(i<maxx+1)
        {
            if(arr[i]>0)
            {
                nums[j++]=i;
                arr[i]--;
            }
            else i++;
        }
       delete []arr;
    }
};