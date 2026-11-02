class Solution {
public:
    int majorityElement(vector<int>& nums) {
    unordered_map<int, int> frequencyMap;

    
    for (int num : nums) {
        frequencyMap[num]++;
    }
    int max=0;
    int maxfreq=0;

    for(int num:nums){
        if(frequencyMap[num]>maxfreq){
            max=num;
            maxfreq=frequencyMap[num];
        }

    }
    return max;


    }
};