class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=0,p=0;
        int no=nums.size();
        for(int i=0;i<no;i++){
            if(nums[i]>0)p++;
            else if(nums[i]<0)n++;
        }
        return max(n,p);
    }
};