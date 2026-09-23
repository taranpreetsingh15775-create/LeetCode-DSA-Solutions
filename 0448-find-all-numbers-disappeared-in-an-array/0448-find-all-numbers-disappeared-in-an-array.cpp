class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int val:nums){
            m[val]++;
        }
        int n=nums.size();
        vector<int> x;

        for(int i=1;i<=n;i++){
            if(m[i]==0){
                x.push_back(i);
            }

        }return x;
    }
};