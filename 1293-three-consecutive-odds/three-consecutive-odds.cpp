class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        if(arr.size()<3)
        return false;
        for(int i=0;i<arr.size()-2;i++)
        {
            if(arr[i]%2!=0&&arr[i+1]%2!=0&&arr[i+2]%2!=0)
            {
                count++;
            }
            if(count>0)
            {
                break;
            }
        }
        if(count==1)
        {
            return true;
        }
        return false;
    }
};