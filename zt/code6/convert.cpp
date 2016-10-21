class Solution {
public:
    string convert(string s, int numRows) {
	string ans = s;
	int index = 0;
	int key;
	if (numRows == 1) { return s; }
	key = (numRows - 1) * 2;
	for (int i = 0; i < numRows; i++) {
	    //key = (numRows - (i%(numRows-1)) - 1) * 2;
		int p = (numRows - (i % (numRows - 1)) - 1) * 2;
		for (int j = i; j < s.length(); j += key) {
			if (p == key) {
				ans[index] = s[j];
				index++;
			}
			else
			{
				ans[index++] = s[j];
				if((j+p)<s.length())
				ans[index++] = s[j + p];
			}
		}
	}
	return ans;

    }
};
