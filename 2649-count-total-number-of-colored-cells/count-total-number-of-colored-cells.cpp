class Solution {
public:
    long long coloredCells(int n) {
        long long int t=1,sum=0;
        int rows=(2*n)-1;
        if(n==1)
        return 1;
        for(int i=0;i<n;i++)
        {
            sum+=t;
            t=t+2;
        }
        t=t-2;
        for(int i=0;i<(rows-n);i++)
        {
            t=t-2;
            sum+=t;
        }
        return sum;
    }
};