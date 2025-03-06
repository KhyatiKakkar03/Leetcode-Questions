class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int mxx=n*n;
        int miss=0,rep=0;
        vector<int> hash(mxx+1,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                int nn=grid[i][j];
                hash[nn]++;
            }
        }
        for(int i=1;i<=n*n;i++)
        {
            if(hash[i]==0)
            miss=i;
            else if(hash[i]>1)
            rep=i;
        }
        vector<int> ans;
        ans.push_back(rep);
        ans.push_back(miss);
        return ans;
    }
};