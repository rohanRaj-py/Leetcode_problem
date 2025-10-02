
// Leetcode problem number:-78
class Solution {
public:
    void subsetSeq(vector<int> nums,int i,vector<vector<int>> &ans,vector<int> &temp){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        subsetSeq(nums,i+1,ans,temp);
        temp.push_back(nums[i]);
        subsetSeq(nums,i+1,ans,temp);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int i=0;
        subsetSeq(nums,i,ans,temp);
        return ans;
    }
};
