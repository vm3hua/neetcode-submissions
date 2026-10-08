class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> group;
        for(string s : strs){
            string temp = s;
            sort(temp.begin(), temp.end());
            group[temp].push_back(s);
        }
        vector<vector<string>> result;
        for(auto& [k,v] : group) result.push_back(v);
        return result;
    }
};