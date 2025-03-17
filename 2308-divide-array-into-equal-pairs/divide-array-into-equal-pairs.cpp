class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        int maxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxx=max(maxx,nums[i]);
        }
        vector<int> hash(maxx+1,0);
        for(int i=0;i<n;i++)
        {
            hash[nums[i]]++;
        }
        bool flag=true;
        for(int i=0;i<=maxx;i++)
        {
            if(hash[i]%2!=0)
            {
                flag=false;
                break;
            }
        }
        return flag==true?true:false;
    }
};