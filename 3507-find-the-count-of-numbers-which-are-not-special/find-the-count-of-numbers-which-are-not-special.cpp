class Solution {
public:
    bool check_prime(int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int nonSpecialCount(int l, int r) {
        int count=0;
        for(int i=2;i*i<=r;i++){
            if(check_prime(i)){
                int square=i*i;
                if(square>=l && square<=r)
                count++;
            }
        }
        return r-l-count+1;
    }
};