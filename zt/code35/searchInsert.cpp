class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
	int len = nums.size();
	int i;
	for (i = 0; i < len; i++) {
		if (nums[i] >= target)
			break;
	}
	if (i == len - 1 && nums[i] < target) i = i + 1;
	return i;
    }
};
