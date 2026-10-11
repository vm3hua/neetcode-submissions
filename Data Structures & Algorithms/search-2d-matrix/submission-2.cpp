class Solution {
public:
    bool search(vector<int>& nums, int target) {
        stack<int> st;
        int n = nums.size();
        int left = 0, right = n - 1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target) return true;
            else if(nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> vec;
        for(auto vc:matrix){
            for(auto num:vc){
                vec.push_back(num);
            }
        }
        return search(vec, target);
    }
};
