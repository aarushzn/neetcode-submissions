class Solution {
public:
    bool isPalindrome(string s) {

        int j = s.length() - 1;

        for (int i = 0; i < j; i++) {

            if (!isalnum(s[i])) {
                continue;
            }

            if (!isalnum(s[j])) {
                i--;
                j--;
                continue;
            }

            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }

            j--;
        }

        return true;
    }
};