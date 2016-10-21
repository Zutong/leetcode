class Solution {
public:
    int romanToInt(string s) {
	map<char, int> table = {
		{ 'I',1 },
		{ 'V',5 },
		{ 'X',10 },
		{ 'L',50 },
		{ 'C',100 },
		{ 'D',500 },
		{ 'M',1000 }
	};
	int ans = table[s.back()];
	for (int i = s.length() - 2; i >= 0; i--) {
		if (table[s[i]] < table[s[i + 1]]) {
			ans -= table[s[i]];
		}
		else
		{
			ans += table[s[i]];
		}
	}

	return ans;
    }
};
