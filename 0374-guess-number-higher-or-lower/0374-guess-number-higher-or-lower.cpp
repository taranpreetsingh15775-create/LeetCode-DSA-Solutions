/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int x=0;

        while(x<=n){
            int mid=x+(n-x)/2;
            if(guess(mid)==0){
                return mid;
            }
            else if(guess(mid)==-1){
                n=mid-1;
            }else{
                x=mid+1;
            }
        }return x;
    }
};