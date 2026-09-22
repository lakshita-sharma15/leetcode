class Solution {
public:
    bool isPalindrome(string s) {

        s.erase(remove_if(s.begin(), s.end(), [](char c) {
            return !isalnum(c);
        }), s.end());

        for (char &c : s) {
            c = tolower(c);
        }

        string rs = s;
        reverse(rs.begin(), rs.end());

        return s == rs;
    }
};