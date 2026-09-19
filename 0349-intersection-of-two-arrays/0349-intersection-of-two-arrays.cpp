class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen(nums2.begin(), nums2.end());
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {
            if (seen.count(nums1[i]) ) {
              ans.push_back(nums1[i]);
              seen.erase(nums1[i]);
              }
         }return ans;
    }
    
};