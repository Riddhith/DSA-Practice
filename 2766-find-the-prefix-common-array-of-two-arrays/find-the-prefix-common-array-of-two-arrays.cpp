class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int> f(n+1,0);
        vector<int> ans;
        int c=0;
        for(int i=0;i<n;i++){
            f[A[i]]++;
            f[B[i]]++;
            if(A[i]==B[i]) c++;
            else{
                if(f[A[i]]==2) c++;
                if(f[B[i]]==2) c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};