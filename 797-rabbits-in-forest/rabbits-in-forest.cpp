class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int n=answers.size();
        int mxx=INT_MIN;
        for(int i=0;i<n;i++)
        mxx=max(mxx,answers[i]);
        vector<int> hash(mxx+1,0);
        for(int i=0;i<n;i++)
        {
            hash[answers[i]]++;
        }
        int ans=0;
        for(int i=0;i<mxx+1;i++)
        {
            if(hash[i]>0)
            {
               int groupSize = i + 1;
                int groups = (hash[i] + groupSize - 1) / groupSize;
                ans += groups * groupSize;
            }
        }
        return ans;
    }
};