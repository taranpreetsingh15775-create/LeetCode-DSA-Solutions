class Solution {
public:
    int climbStairs(int n) {
        vector<int> ans(n+1,-1);
        return solve(n,ans);
    }

    int solve(int n,vector<int> &ans){
        if(n==3){
            return 3;
        }
        else if(n==1){
            return 1;
        }
        else if(n==2){
            return 2;
        }else{
            if(ans[n]!=-1){
                return ans[n];
            }else{
                ans[n]=solve(n-1,ans)+solve(n-2,ans);
            }
        }return ans[n];
    }
};