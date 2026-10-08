class Solution {
public:
    string encode(vector<string>& strs) {
        string out;
        for(const string& s : strs) out += to_string(s.size()) + '#' +s;
        return out;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while(i < (int)s.size()){
            int j = i;
            while(s[j] != '#') j++;
            int len = stoi(s.substr(i, j-i));
            j++;
            result.push_back(s.substr(j, len));
            i = j + len;
        }
        return result;
    }
};