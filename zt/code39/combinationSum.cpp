class Solution {
public:
void getCombinationSum(vector<int>& candidates, vector<vector<int>> &ans,vector<int> &path, int base,int pos,int target) {
	if (target == base) {
		ans.push_back(path);
		return;
	}
	else if (base > target) {
		return;
	}
	else {
		for (int i = pos; i < candidates.size(); i++) {
			path.push_back(candidates[i]);
			getCombinationSum(candidates, ans, path, base + candidates[i], i, target);
			path.pop_back();
		}
		return;
	}

}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
	sort(candidates.begin(), candidates.end());
	vector<vector<int>> ans;
	vector<int > path;
	getCombinationSum(candidates, ans, path, 0, 0, target);
	return ans;
}
};
