class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int x=nums.size();
        int j=0;

        for(int i=1;i<x;i++){
            if(nums[j]%2!=0 && nums[i]%2==0){
                swap(nums[j],nums[i]);
                j++;
            }else if(nums[j]%2==0 && nums[i]%2!=0){
                j++;
            }else if(nums[j]%2!=0 && nums[i]%2!=0){
                continue;
            }else{
                j++;
            }
        }return nums;
    }
};