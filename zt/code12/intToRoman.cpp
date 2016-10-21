class Solution {
public:
    string intToRoman(int num) {
 	string str = "";
	string table[4][10] = {
		{ "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" },
		{ "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" },
		{ "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" },
		{ "", "M", "MM", "MMM" }
	};
	str += table[3][num / 1000];
	str += table[2][num / 100 % 10];
	str += table[1][num / 10 % 10];
	str += table[0][num % 10];
	return str;
    }
};
