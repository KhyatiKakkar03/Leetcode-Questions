class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int n=right;
        int num1,num2;
        vector<int>prime(n+1,1);
        for(int i=2;i*i<=n;i++)
        {
            if(prime[i]==1)
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    prime[j]=0;
                }
            }
        }
        vector<int>ans;
        for(int i=2;i<=right;i++)
        {
            if(prime[i]==1){
                if(i>=left&&i<=right)
            ans.push_back(i);}
           
        }
        int mingap=INT_MAX,index=-1;
        if(ans.size()<2)
        return {-1,-1};
        else
        {
            
        for(int i=0;i<ans.size()-1;i++)
        {
            if((ans[i+1]-ans[i])<mingap)
            {
                mingap=ans[i+1]-ans[i];
                index=i;
            }
        }
        }
        return {ans[index],ans[index+1]};
    }
    
};