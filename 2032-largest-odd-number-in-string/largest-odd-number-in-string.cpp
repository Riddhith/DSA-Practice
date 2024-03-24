class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int index;
        for(int i=num.length();i>=0;i--){
            int digit=(int)num[i];
            if(digit%2!=0){
                index=i;
                break;
            }
        }
        for(int j=0;j<=index;j++){
            ans+=num[j];
        }
        return ans;
    }
};