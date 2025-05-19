class Solution {
public:
    string triangleType(vector<int>& nums) {
        int n=nums.size();
        int a=nums[0],b=nums[1],c=nums[2];
        if(a==b&&b==c)return "equilateral";
        if(((a==b&&a!=c)||(b==c&&b!=a)||(a==c&&b!=a))&&(nums[0]+nums[1]>nums[2])&&(nums[1]+nums[2]>nums[0])&&(nums[0]+nums[2]>nums[1]))return "isosceles";
        sort(nums.begin(),nums.end());
        if(nums[2]<(nums[0]+nums[1]))return "scalene";
        else return "none";
    }
};