class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long m=n;
        // while(n<0){
        //     x=1/x;
        //     n=-(1+n);
        //     ans=ans*x;
        // }
        if(m<0) m=-1*m;
        while(m>0){
            if(m%2==0){
                m=m/2;
                x=x*x;   
            }else{
                ans=ans*x;
                m=m-1;
            }
        }
        // if(m<0) ans=1.0/ans;
        if(n<0) ans=1/ans;
        return ans;
    }
};