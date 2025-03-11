class Solution {
public:
    int numberOfSubstrings(string s) {
        int a=0,b=0,c=0;
        int count=0;
        int left=0,right=0;
        int n=s.size();
        while(right<n)
        {
            if(s[right]=='a')a++;
            else if(s[right]=='b')b++;
            else c++;
            while(a>0&&b>0&&c>0)
            {
                count=count+(n-right);
                if(s[left]=='a')a--;
                else if(s[left]=='b')b--;
                else c--;
                left++;
            }
            right++;
        }
        
        return count;
    }
};