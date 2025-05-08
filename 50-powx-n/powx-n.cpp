class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long temp=n;
        if(n<0)
        {
            temp*=-1;
        }
        while(temp!=0)
        {
            if(temp%2!=0)
            {
                ans*=x;
                temp=temp-1;
            }
            else
            {
                x=x*x;
                temp=temp/2;
            }
        }
        if(n<0)
        {
            ans=(double)1.0/(double)(ans);
        }
        return ans;
    }
};