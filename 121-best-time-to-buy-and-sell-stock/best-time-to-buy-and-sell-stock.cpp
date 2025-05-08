class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minn=1e9;
        int maxprofit=0;
        for(int i=0;i<n;i++)
        {
            if(prices[i]<minn)
            {
                minn=prices[i];
            }
            if(prices[i]-minn>maxprofit)
                maxprofit=prices[i]-minn;
        }
        return maxprofit;
    }
};