class Solution {
public:
    bool isPrefixAndSuffix(string str1,string str2){
        int n1=str1.size();
        int n2=str2.size();
        if(n1>n2) return false;
        string p=str2.substr(0,n1);
        string s=str2.substr(n2-n1,n1);
        if(str1==p && p==s) return true;
        else return false;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int n=words.size();
        int c=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(isPrefixAndSuffix(words[i], words[j])) c++;
            }
        }
        return c;
    }
};