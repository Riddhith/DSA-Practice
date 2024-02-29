class Solution {
public:
    bool isPowerOfTwo(int n) {
        /*
        if(n==0)
        return false;

        while(n>1||n<1){
            if(n%2==0)
                n/=2;
            else
            return false;
        }
        return true;
        */
        int set_bit = 0;
        while (n > 0) {
            int bit = n & 1;
            if (bit == 1)
                set_bit++;
            n = n >> 1;
        }
        if (set_bit == 1)
            return true;
        else
            return false;
    }
};