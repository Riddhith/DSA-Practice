class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp;
        vector<char> v;
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])==mp.end()){
                if(find(v.begin(),v.end(),t[i])==v.end()){
                    mp[s[i]]=t[i];
                    v.push_back(t[i]);
                }else{
                    return false;
                }
            }
            else if(mp[s[i]]!=t[i]){
                return false;
            }
        }
        return true;
    }
};