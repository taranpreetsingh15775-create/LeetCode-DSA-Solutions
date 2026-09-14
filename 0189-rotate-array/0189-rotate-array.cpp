class Solution {
public:
    void reverseRange(vector<int>& nums, int l, int r){
        while(l < r){
            int temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;
            l++;
            r--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int y = nums.size();

        if(y == 0 || y == 1){
            k = 0;
        }

        if(k > y){
            k = k % y;
        }

        reverseRange(nums, 0, y - 1);  
        reverseRange(nums, 0, k - 1);   
        reverseRange(nums, k, y - 1);   
    }
};