class Solution {
public:

 void getpermutation(string &s, int idx, vector<string>& ans) {
        if (idx == s.size()) {
            ans.push_back(s);
            return;
        }

       if (isdigit(s[idx])) {
            getpermutation(s, idx + 1, ans);
        }
        else {
            s[idx] = tolower(s[idx]);
            getpermutation(s, idx + 1, ans);

            s[idx] = toupper(s[idx]);
            getpermutation(s, idx + 1, ans);

            s[idx] = tolower(s[idx]);
        }
    
    };

    vector<string> letterCasePermutation(string s) {
          vector<string> ans;

        getpermutation(s, 0, ans);

        return ans;
    }
};