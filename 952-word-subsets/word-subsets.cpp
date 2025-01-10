class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        unordered_map<char,int> mp;
        for(auto str: words2){
            unordered_map<char,int> cur;
            for(auto ch : str){
                cur[ch]++;
                mp[ch] = max(mp[ch],cur[ch]);
            }
        }
        for(auto str: words1){
            unordered_map<char,int> cur;
            for(char c: str) cur[c]++;
            
            bool ok=true;
            for(auto [ch,frq] : mp)
                if(cur[ch]<frq){
                    ok = false;
                    break;
                }
                if(ok) ans.push_back(str);
        }
        return ans;
    }
};