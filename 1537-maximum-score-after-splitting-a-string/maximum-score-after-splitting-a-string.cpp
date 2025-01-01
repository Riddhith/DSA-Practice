class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        vector<int> zero(n, 0);
        vector<int> one(n, 0);
        int z = 0, o = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                z++;
            } else if (s[i] == '1') {
                o++;
            }
            zero[i] = z;
            one[i] = o;
        }
        int score=0;
        for(int i=0;i<n-1;i++){
            score=max(score, zero[i]+one[n-1]-one[i]);
        }
        return score;
    }
};