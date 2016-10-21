bool isPalindrome(int x) {
    	if (x < 0)return false;
	int x2 = x;
	int base = 1;
	while (1) {
		if (x2 / 10 > 0) {
			base *= 10;
			x2 /= 10;
		}
		else { break; }
	}
	int right = 0, left = 0;
	while (x>0) {
		left = x / base;
		right = x % 10;
		if (left != right) return false;
		x = x % base;
		x = x / 10;
		base /= 100;
	}

	return true;
}
