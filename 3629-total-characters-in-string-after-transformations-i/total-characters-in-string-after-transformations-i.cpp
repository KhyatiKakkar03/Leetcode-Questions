class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
         int mod = 1e9 + 7;
        vector<long long> freq(26, 0);
        for (char c:s) {
            freq[c - 'a']++;
        }
        for (int i = 0; i < t; i++) {
            vector<long long> newFreq(26, 0);
            for (int j = 0; j < 26; j++) {
                if (j == 25) {
                    newFreq[0] = (newFreq[0] + freq[25]) % mod; 
                    newFreq[1] = (newFreq[1] + freq[25]) % mod; 
                } else {
                    newFreq[j + 1] = (newFreq[j + 1] + freq[j]) % mod;
                }
            }
            freq = newFreq;
        }
        long long count = 0;
        for (int i = 0; i < 26; i++) {
            count = (count + freq[i]) % mod;
        }

        return count;
    }
};