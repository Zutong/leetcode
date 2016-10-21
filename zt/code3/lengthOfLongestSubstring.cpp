class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n = s.length();
	int ans = 0;
	int start = 0;
	int hashtable[256];
	for (int i = 0; i < 256; i++) {
		hashtable[i] = -1;
	}
	for (int i = 0; i < n; i++) {
		if (hashtable[s[i]] != -1) {
			while (start <= hashtable[s[i]]) {
				hashtable[s[start++]] = -1;
			}
		}
		if (i - start + 1 > ans) ans = i - start + 1;
		hashtable[s[i]] = i;
	}
	return ans;
}
};
