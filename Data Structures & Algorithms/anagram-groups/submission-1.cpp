class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> xd;
        for(string s : strs){
            string xp = s;
            sort(xp.begin(), xp.end());
            xd[xp].push_back(s);
        }
        vector<vector<string>> result;
        for(auto& [k, v]: xd) result.push_back(v);
        return result;
    }
};
