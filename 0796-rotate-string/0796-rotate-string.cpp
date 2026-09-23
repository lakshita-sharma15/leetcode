class Solution {
public:
    bool rotateString(string s, string goal) {
      
 if(s.length() != goal.length()){
    return false;
 }

 string S = s+s;
 if(S.contains(goal)){
    return true;
 }

return false;
    }
};