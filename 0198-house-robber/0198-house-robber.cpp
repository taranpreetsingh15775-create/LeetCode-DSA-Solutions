class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return solve(n-1,nums,dp);
    }

    int solve(int i,vector<int>& nums,vector<int> &dp){
        if(i==0) return nums[0];
        if(i==1) return max(nums[0],nums[1]);
        if(dp[i]!=-1){
            return dp[i];
        }
        dp[i]=max(nums[i]+solve(i-2,nums,dp),solve(i-1,nums,dp));
        return dp[i];
    }

    
};