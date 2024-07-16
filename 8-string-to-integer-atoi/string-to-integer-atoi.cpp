class Solution {
public:
    int myAtoi(string s) {
        int i=0,sign=1;
        if(i==s.length()){
            return 0;
        }
        while(i<s.length() && s[i]==' '){
            i++;
        }
        if(s[i]=='-'){
            sign=-1;
            i++;
        }else if(s[i]=='+'){
            i++;
        }
        long long res=0;
        while(i<s.length() && isdigit(s[i])){
            res=res*10+(s[i]-'0');
            if((res*sign)>=INT_MAX){
                return INT_MAX;
            }else if((res*sign)<=INT_MIN){
                return INT_MIN;
            }
            i++;
        }
        return res*sign;
        /*
        int l=s.size(),sign=0,c=0;
        long num=0;
        string revs="",revss="";
        bool flag=true;
        for(int i=0;i<l;i++){
            if(s[i]==' ' && flag)
            {
                continue;
            }else{
                flag=false;
                revs=revs+s[i];
            }
        }
        if(revs[0]=='-'){
            sign=-1;
        }else{
            sign=1;
            if(revs[0]!='+'){
                revs='+'+revs;
            }
        }
        for(int i=1;i<revs.length();i++){
            revss=revss+revs[i];
        }
        for(int i=0;i<revss.length();i++){
            if(revss[i]=='0' && c==0){
                continue;
            }else if(revss[i]>='0' && revss[i]<='9'){
                num=num*10+(revss[i]-'0');
                if((num*sign)>=INT_MAX){
                    return INT_MAX;
                }else if((num*sign)<=INT_MIN){
                    return INT_MIN;
                }
                c++;
            }else break;
        }
        return num*sign;
        */
    }
};