class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans;

        solve(image,ans);
        return ans;
    }

    void solve(vector<vector<int>>& image,vector<vector<int>> &ans){
        for(int i=0;i<image.size();i++){
            vector<int> temp;
            int x=image[0].size()-1;
            for(int j=0;j<image[0].size();j++){
                if(image[i][x]==0){
                    temp.push_back(1);
                    x--;
                }else{
                    temp.push_back(0);
                    x--;   
                    }
                if(temp.size()==image[0].size()){
                    ans.push_back(temp);
                }
                    
             }
        }
    }
};