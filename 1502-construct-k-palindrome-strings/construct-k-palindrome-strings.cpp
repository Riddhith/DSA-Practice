class Solution {
public:
    bool canConstruct(string s, int k) {
        map<char,int> mp;
        int n=s.size();
        if(n<k) return false;
        for(auto ch:s){
            mp[ch]++;
        }
        int odd=0;
        bool flag=true;
        for(auto it:mp){
            if(it.second%2!=0){
                odd++;
            }
        }
        // cout<<flag<<endl;
        if(odd<=k) return true;
        else return false;
    }
};