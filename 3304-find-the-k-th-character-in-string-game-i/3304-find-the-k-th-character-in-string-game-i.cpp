class Solution {
public:
    char kthCharacter(int k) {
        string g = "a";
        
        
        while (g.size() < k) {
            string next_part = "";
            for (char n : g) {
                if (n == 'z') {
                    next_part += 'a';
                } else {
                    next_part += (n + 1);
                }
            }
            g += next_part; 
        }
        
        return g[k - 1]; 
    }
};
