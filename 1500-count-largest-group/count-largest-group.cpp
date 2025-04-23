class Solution {
public:
int calcsum(int n)
{
    int sum=0;
    while(n)
    {
        int temp=n%10;
        sum+=temp;
        n=n/10;
    }
    return sum;
}
    int countLargestGroup(int n) {
        unordered_map<int,vector<int>> mpp;
        for(int i=1;i<=n;i++)
        {
            int temp1=calcsum(i);
            mpp[temp1].push_back(i);
        }
        int mxx=0;
        for(auto &it:mpp)
        {
            vector<int> temp=it.second;
            int n1=temp.size();
            mxx=max(mxx,n1);
        }
        int count=0;
        for(auto &it:mpp)
        {
            vector<int> temp=it.second;
            int n1=temp.size();
            if(n1==mxx)
            count++;
        }
        return count;
    }
};