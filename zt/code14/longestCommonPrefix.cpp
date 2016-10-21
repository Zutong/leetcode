class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    if (strs.size() == 0) return "";
	for (int i = 0; i < strs[0].length(); i++) {
		for (int j = 1; j < strs.size(); j++) {
			if (strs[0][i] != strs[j][i] || i>=strs[j].length()) {
				return strs[0].substr(0,i);
			}
		}
	}
	return strs[0];
    }
};
