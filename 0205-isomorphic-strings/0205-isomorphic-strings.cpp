class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char,char>m1;
         unordered_map<char,char>m2;
 
        for(int i=0;i<s.length();i++){
          char first = s[i];
          char second = t[i];

        if(m1.count(first)){
            if(m1[first] != second){
                return false;
            }
        }
        else{
                m1[first] = second;
        }
        
        
        if(m2.count(second)){
            if(m2[second] != first){
                return false;
            }
        }
        else{
                m2[second] = first;
            }
        
        }

return true;
    }
};