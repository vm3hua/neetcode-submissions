class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pos;
        for(int i = 0; i < nums.size(); i++){
        int need = target - nums[i];
        if(pos.count(need)){
            if (pos[need] < i) return {pos[need], i};
            else return {i, pos[need]};
        }
        pos[nums[i]] = i;
    }
    return {};
    }
};
