class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int left = 0, maxFreq = 0, maxLen = 0;
        for(int right = 0; right < s.size(); right++) {
            count[s[right]]++;
            maxFreq = max(maxFreq, count[s[right]]);
            // window長度 = right - left + 1
            // window長度 - maxFreq = 需要被替換的字元數量
            // 如果需要替換的數量 > k 代表這個 window 不合法，要從左邊縮小
            while((right - left + 1) - maxFreq > k) {
                count[s[left]]--;
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};