class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char,int> mp;
        int n=s.size();
        if(n<k) return false;
        for(auto ch:s){
            mp[ch]++;
        }
        int odd=0;
        bool flag=true;
        for(auto it:mp){
            odd+=it.second&1;
        }
        // cout<<flag<<endl;
        return odd<=k;
    }
};