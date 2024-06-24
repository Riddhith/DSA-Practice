class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string st="";
        
        string w="";
        for(int i=0;i<s.length();i++){
            if(w.empty() && s[i]==' '){
                continue;
            }
            w=w+s[i];
        }
        w=" "+w;
        for(int i=w.length()-1;i>=0;i--){
            if(w[i]==' ' && w[i+1]==' ') continue;
            if(w[i]==' '){
                v.push_back(st);
                st="";
                continue;
            }
            
            st=w[i]+st;
        }
        string ans="";
        int size=v.size();
        for(int i=0;i<v.size()-1;i++){
            ans+=v[i]+" ";
        }
        ans+=v[size-1];
        string w1="";
        for(int i=0;i<ans.length();i++){
            if(w1.empty() && ans[i]==' '){
                continue;
            }
            w1=w1+ans[i];
        }
        return w1;
    }
};