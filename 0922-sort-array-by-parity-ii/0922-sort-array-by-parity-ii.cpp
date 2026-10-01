class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int j=0;
        int k=1;
        int n=nums.size();
        vector<int> nums2(n);

        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                nums2[j]=nums[i];
                j+=2;
            }else{
                nums2[k]=nums[i];
                k+=2;
            }
        }return nums2;
    }
};