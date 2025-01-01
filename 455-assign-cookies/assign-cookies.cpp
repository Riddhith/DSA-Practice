class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int c = 0;
        int n1 = g.size();
        int n2 = s.size();
        int l1 = 0,l2=0;
        while (l1<n1 && l2<n2) {
            if (s[l2]>=g[l1]) {
                l1++;
            }
            l2++;
        }
        return l1;
    }
};