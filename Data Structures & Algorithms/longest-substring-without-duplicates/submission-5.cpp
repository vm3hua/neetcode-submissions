class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int left = 0, right = 0, ans = 0;
        while(right < s.size()){
            while(seen.count(s[right])){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            ans = max(ans, right - left + 1);
            right++;
        }
        return ans;
    }
};