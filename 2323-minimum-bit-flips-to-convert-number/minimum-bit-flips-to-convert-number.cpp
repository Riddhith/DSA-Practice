class Solution {
public:
    int minBitFlips(int start, int goal) {
        int res=start^goal;
        int set=0;
        while(res){
            res=res&(res-1);
            set++;
        }
        return set;
    }
};