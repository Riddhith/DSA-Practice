class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int l1=strs[0].length();
        int l2=strs[strs.size()-1].length();
        int minil=min(l1,l2);
        int i=0;
        string res="";
        while(i<minil){
            if(strs[0][i]==strs[strs.size()-1][i]){
                res+=strs[0][i];
            }else{
                break;
            }
            i++;
        }
        return res;
    }
};