class Solution {
public:
    int myAtoi(string str) {
	int n = str.length();
	double ans = 0;
	int index = 0;
	int flag = 1;
	if (n == 1) {
		if (str[0] <= '9' && str[0] >= '0')
			return (int)(str[0]-'0');
		else
		{
			return 0;
		}
	}
	if (str[0] == ' ') {
		index++;
		for (int i = 1; i < n; i++) {
			if (str[i] == ' ') { index++; }
			else break;
		}
	}

	if (str[index] == '+') {
		for (int i = index+1; i < n; i++) {
			if (str[i] <= '9' && str[i] >= '0') {
				ans = ans * 10 + (int)(str[i] - '0');
			}
			else
			{
				break;
			}
		}
	}
	else if (str[index] == '-') {
		flag = -1;
		for (int i = index+1; i < n; i++) {
			if (str[i] <= '9' && str[i] >= '0') {
				ans = ans * 10 + (int)(str[i] - '0');
			}
			else
			{
				break;
			}
		}
	}
	else if (str[index] <= '9' && str[index] >= '0') {
		for (int i = index; i < n; i++) {
			if (str[i] <= '9' && str[i] >= '0') {
				ans = ans * 10 + (int)(str[i] - '0');
			}
			else break;
		}
	}
	else return 0;
	ans = flag * ans;
	return (ans>INT_MAX? INT_MAX:ans<INT_MIN?INT_MIN:ans);
    }
};
