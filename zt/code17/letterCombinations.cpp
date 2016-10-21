class Solution {
public:
    void myCombinations(string digits, vector<string >&dst, string temp, map<char, string> table) {
    	int curlen = temp.size();
	    if (curlen == digits.length()) {
		    dst.push_back(temp);
	    }
	    else
	    {
		    for (int i = 0; i < table[digits[curlen]].size(); i++) {
			    temp.push_back(table[digits[curlen]][i]);
    			myCombinations(digits, dst, temp, table);
	    		temp.pop_back();
		    }
	    }
    }
    vector<string> letterCombinations(string digits) {
    	map<char, string> table = {
		{ '2',"abc" },
		{ '3',"def" },
		{ '4',"ghi" },
		{ '5',"jkl" },
		{ '6',"mno" },
		{ '7',"pqrs" },
		{ '8',"tuv" },
		{ '9',"wxyz" }
	};
	string temp = "";
	vector<string > dst;
	if (digits.size() < 1) return dst;
	myCombinations(digits, dst, temp, table);
	return dst;
    }
};
