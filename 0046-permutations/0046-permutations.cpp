class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> v;
       vector<int> v1;
       solve(v,v1,nums);
       return v;  
    }

    void solve(vector<vector<int>> &v,vector<int> &v1,vector<int>& nums){
        if(v1.size()==nums.size()){
            v.push_back(v1);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(find(v1.begin(),v1.end(),nums[i])==v1.end()){
               v1.push_back(nums[i]);
               solve(v,v1,nums);
               v1.pop_back(); 
            }
        }
    }
};