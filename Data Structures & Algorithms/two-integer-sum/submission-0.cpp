class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pos;
        for(int i = 0; i < nums.size(); i++){
        int need = target - nums[i];
        if(pos.count(need)){
            int j = pos[need];
            if (j < i) return {j, i};
            else return {i, j};
        }
        pos[nums[i]] = i;
    }
    return {};
    }
};
