class Solution {
public:
    vector<vector<int>> twoSum(vector<int>& nums, int start, int target) {
        vector<vector<int>> res;
        int left = start, right = nums.size() - 1;
        while(left < right) {
            int sum = nums[left] + nums[right];
            if(sum == target) {
                res.push_back({nums[left], nums[right]});
                left++;
                right--;
                while(left < right && nums[left] == nums[left - 1]) left++;
                while(left < right && nums[right] == nums[right + 1]) right--;
            }
            else if(sum < target) left++;
            else right--;
        }
        return res;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i < n - 2; i++) {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int target = -nums[i];
            vector<vector<int>> pairs = twoSum(nums, i + 1, target);
            for(auto& pair : pairs) {
                ans.push_back({
                    nums[i],
                    pair[0],
                    pair[1]
                });
            }
        }
        return ans;
    }
};