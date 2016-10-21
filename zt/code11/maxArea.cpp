class Solution {
public:
    int maxArea(vector<int>& height) {
    int len = height.size();
	if (len <= 1) return 0;
	int ans = 0;
	int i = 0, j = len - 1;
	int h;
	while (i < j) {
		ans = max(ans, min(height[i], height[j]) * (j - i));
		if (height[i] < height[j]) { i++; }
		else j--;
	}
	return ans;
    }
};
