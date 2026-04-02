class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for (char ch: s) {
            if (isalnum(ch)) {
                cleaned += tolower(ch);
            }
        }
        int i = 0;
        int j = cleaned.length() - 1;

        while (i < (cleaned.length()/2)+1) {
            if (cleaned[i] != cleaned[j]) {
                cout << cleaned[i];
                cout << cleaned[j];
                return false;
            }
            i++;
            j--;
            
        }
        return true;
    }
};
