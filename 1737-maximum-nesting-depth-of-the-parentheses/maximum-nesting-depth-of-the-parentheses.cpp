class Solution {
public:
    int maxDepth(string s) {
        int l=s.length();
        int p=0;
        int maxp=-1;
        for(int i=0;i<l;i++){
            if(s[i]=='('){
                p++;
            }else if(s[i]==')'){
                p--;
            }
            maxp=max(maxp,p);
        }
        return maxp;
    }
};