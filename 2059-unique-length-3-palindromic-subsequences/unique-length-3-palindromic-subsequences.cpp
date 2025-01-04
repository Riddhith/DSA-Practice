class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> first(26,-1);
        vector<int> last(26,-1);
        int n=s.size();
        for(int i=0;i<n;i++){
            if(first[s[i]-'a']==-1){
                first[s[i]-'a']=i;
            }
            last[s[i]-'a']=i;
        }
        int c=0;
        for(int i=0;i<first.size();i++){
            int l=first[i];
            int r=last[i];
            set<char> st;
            for(int j=l+1;j<r;j++){
                st.insert(s[j]);
            }
            c+=st.size();
        }
        return c;
    }
};