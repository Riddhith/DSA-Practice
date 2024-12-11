class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxc = 0;
        for (int i = 0; i < n; i++) {
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
        }
        return maxc;
    }
};