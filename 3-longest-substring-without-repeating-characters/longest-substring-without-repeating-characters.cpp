class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxc = 0;
        /*for (int i = 0; i < n; i++) {
            int c = 0;
            vector<char> v;
            for (int j = i; j < n; j++) {
                if (find(v.begin(), v.end(), s[j]) == v.end()) {
                    v.push_back(s[j]);
                    c++;
                } else {
                    break;
                }
            }
            maxc = max(maxc, c);
        }*/
        int left=0;
        int right=0;
        vector<int> hash(256,-1);
        while(right<n){
            if(hash[s[right]]!=-1){
                if(hash[s[right]]>=left){
                    left=hash[s[right]]+1;
                }
            }
            maxc=max(maxc,right-left+1);
            hash[s[right]]=right;
            right++;
        }
        return maxc;
    }
};