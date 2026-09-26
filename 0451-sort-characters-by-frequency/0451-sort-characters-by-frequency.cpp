class Solution {
public:
    string frequencySort(string s) {

    //  unordered_map<char,int>m1;
     int freq[256] = {0};
     for(int i =0;i<s.length();i++){
        freq[s[i]]++;
     }
     vector<pair<int,char>>v1;

     for(int i =0; i<256;i++){
          if(freq[i]>0){
            v1.push_back({freq[i],char(i)});
          }
     }
     s.clear();
     sort(v1.rbegin(),v1.rend());
     for(auto x:v1){
        int n=x.first;
        char ch=x.second;
        while(n--){
            s+=ch;
        }
     }
     return s;
    }
};
