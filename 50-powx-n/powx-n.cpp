class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        // int m=n;
        while(n<0){
            x=1/x;
            n=-(1+n);
            ans=ans*x;
        }
        while(n>0){
            if(n%2==1){
                ans=ans*x;
                n=n-1;
            }else{
                n=n/2;
                x=x*x;
            }
        }
        // if(m<0) ans=1.0/ans;
        return ans;
    }
};