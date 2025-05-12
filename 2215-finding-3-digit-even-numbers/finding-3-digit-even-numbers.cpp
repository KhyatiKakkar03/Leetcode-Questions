class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n=digits.size();
        set<int> ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(i!=j&&j!=k&&i!=k&&digits[i]!=0)
                    {int num=100*digits[i]+10*digits[j]+digits[k];
                    if(num%2==0)
                    ans.insert(num);}
                }
            }
        }
        vector<int> finalans;
        for(auto it:ans)
        {
            finalans.push_back(it);
        }
        return finalans;
    }
};