class Solution {
public:

    void getallsubsets(vector<int>& nums,vector<int> result,int i,vector<vector<int>> & allsubsets){
        if(i== nums.size()){
         allsubsets.push_back(result);
         return;   
        }
        //include
        result.push_back(nums[i]);
        getallsubsets(nums,result, i+1, allsubsets);

        result.pop_back();

        int idx =i+1;
    while(idx < nums.size() && nums[idx]==nums[i]){
        idx++;
    }
    //exclude
          getallsubsets(nums,result, idx, allsubsets);

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      vector<vector<int>>allsubsets;
      vector<int> result;
        getallsubsets(nums,result, 0, allsubsets);
      return allsubsets;
        }
};