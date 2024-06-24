class Solution {
public:
    string removeOuterParentheses(string s) {
        int p=0;
        vector<string> v;
        string st="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                p++;
            }else if(s[i]==')'){
                p--;
            }
            st+=s[i];
            if(p==0){
                v.push_back(st);
                st="";
            }
        }
        for(int i=0;i<v.size();i++){
            string sr="";
            for(int j=1;j<v[i].length()-1;j++){
                sr+=v[i][j];
            }
            v[i]=sr;
        }
        string ans="";
        for(int i=0;i<v.size();i++){
            ans+=v[i];
        }
        return ans;
    }
};