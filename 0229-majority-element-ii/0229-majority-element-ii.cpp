class Solution {
    public:
        vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int>ravi;
       vector<int>ans;
       int n=nums.size();
       for(int  i=0;i<nums.size();i++){
        ravi[nums[i]]++;
       }
       for (const auto& i: ravi){
        if(i.second>(n/3)){
            ans.push_back(i.first);
        }
       }
       return ans;
        }
    };
