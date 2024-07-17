class Solution {
public:
int beauty(vector<int>&alpha){
    int mini=1e9;
    int maxi=-1;
    for(int i=0;i<alpha.size();i++){
        maxi=max(maxi,alpha[i]);
        if(alpha[i]>=1){
            mini=min(mini,alpha[i]);
        }
    }
    return maxi-mini;
}
    int beautySum(string s) {
        int res=0;
        for(int i=0;i<s.length();i++){
            vector<int>alpha(26,0);
            for(int j=i;j<s.length();j++){
                alpha[s[j]-'a']++;
                res=res+beauty(alpha);
            }
        }
        return res;
    }
};