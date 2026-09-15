class Solution {
public:
    int maxArea(vector<int>& height) {
       int maxwater=0;
       int l =0;
       int r=height.size()-1;
       while(l<r){
        int area=(r-l)*(min(height[l],height[r]));
        maxwater=max(maxwater,area);
        if(height[l]<height[r]){
            l++;
        }
        else{
            r--;
        }
       }return maxwater;

    }
};