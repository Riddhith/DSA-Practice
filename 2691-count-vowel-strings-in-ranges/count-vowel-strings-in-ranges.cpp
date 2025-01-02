class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        unordered_set<char> v;
        v.insert('a');
        v.insert('e');
        v.insert('i');
        v.insert('o');
        v.insert('u');
        map<int,int> mp;
        mp[-1]=0;
        int c=0;
        for(int i=0;i<n;i++){
            int si=words[i].size();
            if((v.find(words[i][0])!=v.end()) && (v.find(words[i][si-1])!=v.end())){
                c++;
            }
            mp[i]=c;
        }
        int q=queries.size();
        vector<int> ans(q);
        for(int i=0;i<q;i++){
            int l=queries[i][0];
            int r=queries[i][1];
            ans[i]=mp[r]-mp[l-1];
        }
        return ans;
    }
};