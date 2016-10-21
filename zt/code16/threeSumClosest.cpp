class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    int len = nums.size();
	int min = abs(nums[0] + nums[1] + nums[2] - target);
	int ans = nums[0] + nums[1] + nums[2];
	for (int i = 0; i < len - 2; i++) {
		for (int j = i + 1; j < len - 1; j++) {
			for (int k = j + 1; k < len; k++) {
				int closet = nums[i] + nums[j] + nums[k];
				if (closet - target == 0)
					return target;
				else if (abs(closet - target) < min )
				{
					min = abs(closet - target);
					ans = closet;
				}
			}
		}
	}
	
	return ans;
    }
};
