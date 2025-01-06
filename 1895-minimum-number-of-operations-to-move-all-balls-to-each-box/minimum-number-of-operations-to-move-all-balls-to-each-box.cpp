class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            int ad=0;
            for(int j=0;j<n;j++){
                if(i==j) continue;
                if(boxes[j]=='1') ad+=(abs(j-i));
            }
            ans[i]=ad;
        }
        return ans;
    }
};