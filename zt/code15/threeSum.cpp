class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	vector<vector <int>> ans;
	int fr, begin, end;
	int len = nums.size();
	if (len < 3) { return ans; }
	begin = 1;
	end = len-1;
	int key = 0;
	for (int fr = 0; fr < len; fr++) {
		while (fr > 0 && fr < len && nums[fr] == nums[fr - 1]) { fr++; }
		begin = fr + 1;
		end = len - 1;
		while (begin < end)
		{
			if (nums[fr] + nums[begin] + nums[end] == 0) {
				vector<int > v1;
				v1.push_back(nums[fr]);
				v1.push_back(nums[begin]);
				v1.push_back(nums[end]);
				ans.push_back(v1);
				begin++;
				end--;
				while (begin < end && nums[begin] == nums[begin - 1]) {
					begin++;
				}
				while (begin < end && nums[end] == nums[end+1])
				{
					end--;
				}
			}
			else if (nums[fr] + nums[begin] + nums[end] < 0)
			{
				begin++;
			}
			else
			{
				end--;
			}
		}
	}
	return ans;
    }
};
