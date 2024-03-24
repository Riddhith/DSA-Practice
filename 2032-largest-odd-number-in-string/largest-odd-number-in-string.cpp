class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        for(int i=num.length();i>=0;i--){
            int digit=(int)num[i];
            if(digit%2!=0){
                for(int j=0;j<=i;j++){
                    ans+=num[j];
                }
                break;
            }
        }
        return ans;
    }
};