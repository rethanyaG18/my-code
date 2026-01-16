class Solution {
public:
    string mostCommonWord(string s, vector<string>& banned) {
        unordered_set<string> mp(banned.begin(), banned.end());
        unordered_map<string, int> freq;
        string word = "", res = "";
        int max_freq = 0;
        for (char& c : s) {
            if (isalpha(c)) {
                word += tolower(c);
            } else if (!word.empty()) {
                if (mp.find(word) == mp.end()) {
                    freq[word]++;
                    if (freq[word] > max_freq) {
                        max_freq = freq[word];
                        res = word;
                    }
                }
                word.clear();
            }
        }
        if (!word.empty() && mp.find(word) == mp.end()) {
            freq[word]++;
            if (freq[word] > max_freq)
                res = word;
        }
        return res;
    }
};