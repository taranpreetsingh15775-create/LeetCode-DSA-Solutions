// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int x=0;
        int lastbad=0;

        while(x<=n){
            int mid=n + (x-n)/2;

            if(isBadVersion(mid)==true){
                lastbad=mid;
                n=mid-1;
            }else{
                x=mid+1;
            }
        }return lastbad;
    }
};