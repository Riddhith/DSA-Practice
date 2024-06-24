class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string st="";
        string w="";
        string w1="";
        for(int i=0;i<s.length();i++){
            if(w.empty() && s[i]==' '){
                continue;
            }
            w=w+s[i];
        }
        reverse(w.begin(),w.end());
        for(int i=0;i<w.length();i++){
            if(w1.empty() && w[i]==' '){
                continue;
            }
            w1=w1+w[i];
        }
        reverse(w1.begin(),w1.end());
        w1=" "+w1;
        for(int i=w1.length()-1;i>=0;i--){
            if(w1[i]==' ' && w1[i+1]==' ') continue;
            if(w1[i]==' '){
                v.push_back(st);
                st="";
                continue;
            }
            st=w1[i]+st;
        }
        string ans="";
        int size=v.size();
        for(int i=0;i<v.size()-1;i++){
            ans+=v[i]+" ";
        }
        ans+=v[size-1];
        return ans;
    }
};