class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) { 
            return false; 
        }
         
        long b = reverse(x);
        
        if (b == x) { 
            return true; 
        }
        return false;
    }
    
    
    long reverse(int num) {
        long rev_num = 0;
        while (num != 0) {
            rev_num = rev_num * 10 + num % 10;
            num /= 10;
        }
        return rev_num;
    }
};
