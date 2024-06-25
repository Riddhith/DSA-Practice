class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        int i=0;
        int l=s.size();
        while(i<l){
            char ch=s[l-1];
            for(int j=l-2;j>=0;j--){
                s[j+1]=s[j];
            }
            s[0]=ch;
            // cout<<s<<endl;
            if(s==goal) return true;
            i++;
        }
        return false;
        /*
        char ch=goal[goal.length()-1];
        int index=-1;
        for(int i=0;i<s.length();i++){
            if(s[i]==ch){
                index=i;
                break;
            }
        }
        if(index==-1) return false;
        reverse(s.begin(),s.begin()+index+1);
        reverse(s.begin()+index+1,s.end());
        reverse(s.begin(),s.end());
        if(s==goal) return true;
        else return false;
        */
    }
};