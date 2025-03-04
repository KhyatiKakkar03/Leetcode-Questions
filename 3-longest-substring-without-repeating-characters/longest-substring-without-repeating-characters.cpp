class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
        int n=s.size();
        int l=0,r=0;
        int ans=0;
        while(r<n)
        {
            if((mpp.count(s[r])==0)||(mpp[s[r]]<l)){
                mpp[s[r]]=r;
                ans=max(ans,(r-l+1));
                r++;
            }
            else
            {
                l=mpp[s[r]]+1;
                mpp[s[r]]=r;
                r++;
            }
        }
        return ans;
    }
};