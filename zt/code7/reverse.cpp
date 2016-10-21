class Solution {
public:
    int reverse(int x) {
	double ans=0;
	while (1) {
		ans = ans * 10 + x % 10;
		x = x / 10;
		if (x == 0) { break; }
	}
	return (ans > INT_MAX||ans<INT_MIN? 0:ans);
    }
};
