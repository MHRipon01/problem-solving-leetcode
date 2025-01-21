//https://leetcode.com/problems/sqrtx/
class Solution {
public:
    int mySqrt(int x) {
        int r;
        for(double i=0;i*i<=x;i++){
            if(i*i==x){
                return i;
            }
            r=i;
        }
        return r;
    
    }
};