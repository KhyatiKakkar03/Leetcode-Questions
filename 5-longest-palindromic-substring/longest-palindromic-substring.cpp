class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        string lps="";
        for(int k=0;k<n;k++)
        {
            int left=k;
            int right=k;
            while(left>=0&&right<n&&s[left]==s[right])
            {
                while (left >= 0 && right < n && s[left] == s[right]) {
                int len = right - left + 1;
                string ans = s.substr(left, len);
                if (ans.length() > lps.length()) {
                    lps = ans;
                }
                left--;
                right++;
            }
            left=k-1;
            right=k;
            while (left >= 0 && right < n && s[left] == s[right]) {
                int len = right - left + 1;
                string ans = s.substr(left, len);
                if (ans.length() > lps.length()) {
                    lps = ans;
                }
                left--;
                right++;
            }
        }
    }
        return lps;
    }
};