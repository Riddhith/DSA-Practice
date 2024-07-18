class Solution {
public:
    bool checkodd(int num){
        if(num%2==0){
            return false;
        }
        return true;
    }
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size()<3) return false;
        for(int i=0;i<arr.size()-2;i++){
            if((checkodd(arr[i]))&&(checkodd(arr[i+1]))&&(checkodd(arr[i+2]))){
                return true;
            }
        }
        return false;
    }
};