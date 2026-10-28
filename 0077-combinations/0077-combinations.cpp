class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> v;
        vector<int> v1;
        int c=1;
        solve(v,v1,n,k,c);
        return v;
        
    }

    void solve(vector<vector<int>> &v,vector<int> &v1,int n,int k,int c){
        if(v1.size()==k){
            v.push_back(v1);
            return;
        }

        for(int i=c;i<=n;i++){
            v1.push_back(i);
            solve(v,v1,n,k,c=i+1);
            v1.pop_back();
        }

    }
};