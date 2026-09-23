class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
      
        int n=nums.size();
        vector<int> x;

        for(int i=0;i<n;i++){
            int y=abs(nums[i]);
            nums[y-1]=-abs(nums[y-1]);

        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                x.push_back(i+1);
            }
        }return x;

    }
};