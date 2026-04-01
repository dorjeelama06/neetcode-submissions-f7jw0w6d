
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, int> counter;
        std::unordered_map<char, int> counter1;

        for (char c : s) {
            counter[c] += 1;
        }

        for (char c : t) {
            counter1[c] += 1;
        }
        return counter == counter1;
    }
};
