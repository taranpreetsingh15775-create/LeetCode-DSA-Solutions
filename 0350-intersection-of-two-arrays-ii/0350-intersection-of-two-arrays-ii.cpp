class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> seen;
        for (int num : nums2) {
            seen[num]++;
        }
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {
            if (seen[nums1[i]] > 0) {
              ans.push_back(nums1[i]);
              seen[nums1[i]]--;
              }
         }return ans;
    }
    
};