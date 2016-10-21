class Solution {
public:
    string longestPalindrome(string s) {
		int n = s.length();
	if (n == 0)return NULL;
	if (n == 1)return s;
	int maxlen = 1, startpos=0;
	bool isPalindrome[1000][1000] = {false};
	for (int i = 0; i < n; i++) {
		isPalindrome[i][i] = true;
		if ( i < n - 1 && s.at(i) == s.at(i + 1) )
		{
			isPalindrome[i][i + 1] = true;
			startpos = i;
			maxlen = 2;
		}
	}
	for (int i = 3; i <= n; i++) {

		for (int j = 0; j <= n - i; j++) {

			int end = j + i - 1;
			if (isPalindrome[j + 1][end - 1] && s.at(j) == s.at(end)) {
				isPalindrome[j][end] = true;
				if (i > maxlen)
				{
					maxlen = i;
					startpos = j;
				}
			}
		}
	}
	return s.substr(startpos, maxlen);
}
};
