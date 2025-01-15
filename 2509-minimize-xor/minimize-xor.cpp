class Solution {
public:
    int setBits(int n){
        int c=0;
        while(n){
            int bit=n&1;
            if(bit) c++;
            n=n>>1;
        }
        return c;
    }
    int minimizeXor(int num1, int num2) {
        int result = num1;
        int targetSetBitsCount = setBits(num2);
        int setBitsCount = setBits(num1);
        int currentBit = 0;
        while(setBitsCount < targetSetBitsCount){
            int mask=1<<currentBit;
            if((result & mask)==0){
                result = result | (1 << currentBit);
                setBitsCount++;
            }
            currentBit++;
        }
        while(setBitsCount > targetSetBitsCount){
            int mask=1<<currentBit;
            if((result & mask)>0){
                result = result & ~(1 << currentBit);
                setBitsCount--;
            }
            currentBit++;
        }
        return result;
    }
};