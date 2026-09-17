class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int size = prices.size();
        int l1 = prices[0];
        int total = 0 ;

        for (int i = 1 ; i < size ; i++){
            
            int l2 = prices[i];
            if(l1 > l2){
                l1 = l2;
                continue;
            }
            if(l2 > l1){
                total += (l2 - l1);
                l1 = prices[i ];
                
            }
        }
        return total;
    }
};