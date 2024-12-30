class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> a(3,-1);
        int cnt=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            a[s[i]-'a']=i;
            if(a[0]!=-1 && a[1]!=-1 && a[2]!=-1){
                cnt=cnt+1+min({a[0],a[1],a[2]});
            }
        }
        /*int c=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            map<char,int> mp;
            for(int j=i;j<n;j++){
                mp[s[j]]++;
                if(mp['a']>=1 && mp['b']>=1 && mp['c']>=1){
                    c=c+(n-j);
                    break;
                }
            }
        }*/
        return cnt;
    }
};