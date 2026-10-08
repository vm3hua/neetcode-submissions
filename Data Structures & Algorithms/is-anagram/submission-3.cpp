class Solution {
public:
    bool isAnagram(string s, string t) {   
        if(s.size() != t.size()) return false;
        unordered_map<char, int> num;
        for(char c : s) num[c]++;
        for(char c : t){
            if(--num[c] < 0) return false;
        }
        return true;
    }
};