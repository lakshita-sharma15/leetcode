class Solution {
    public:
        string removeDuplicateLetters(string s) {
 vector<int> lastIndex(26);
 vector<bool> used(26, false);
   for (int i = 0; i < s.size(); i++) {
   lastIndex[s[i] - 'a'] = i;
   }
    stack<char> st;
for (int i = 0; i < s.size(); i++) {
   char c = s[i];
 if (used[c - 'a']) continue;
 while (!st.empty() && 
     st.top() > c && 
 lastIndex[st.top() - 'a'] > i) {
    used[st.top() - 'a'] = false;
     st.pop();
          }
            st.push(c);
   used[c - 'a'] = true;
    }
   string result;
   while (!st.empty()) {
       result += st.top();
        st.pop();
             }
     reverse(result.begin(), result.end());
   return result;
    }
  };
