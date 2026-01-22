class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].substr(0, prefix.size()) != prefix) {
                prefix.pop_back();
                if (prefix == "") return "";
            }
        }
        return prefix;
    }
};
