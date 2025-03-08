class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int w=0,b=0;
        int n=blocks.size();
        int left=0,right=0;
        int minwhite=INT_MAX;
        while(right<n)
        {
            if(blocks[right]=='W')
            {
                w++;
            }
            else
            b++;
            if((right-left+1)==k)
            {
                minwhite=min(minwhite,w);
                if(blocks[left]=='W')
                w--;
                else
                b--;
                left++;
            }
            
            right++;
        }
        return minwhite;
    }
};