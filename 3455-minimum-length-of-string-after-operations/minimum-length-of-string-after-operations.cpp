class Solution {
public:
    int minimumLength(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int ans=0;
        for(auto it:mp){
            while(it.second>=3){
                it.second = it.second-2;
            }
            ans+=it.second;
            
        }
        return ans;
    }
};