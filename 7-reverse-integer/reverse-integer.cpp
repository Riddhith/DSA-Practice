class Solution {
public:
    int reverse(int x) {
        long long rev=0;
        while(x!=0){
            int d=x%10;
            if(rev*10>INT_MAX || rev*10<INT_MIN){
                return 0;
            }
            rev=rev*10+d;
            x=x/10;
        }
        return rev;
    }
};