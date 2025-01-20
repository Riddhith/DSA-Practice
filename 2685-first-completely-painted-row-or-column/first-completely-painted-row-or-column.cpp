class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size(), N = m * n;
        vector<int> numToIndex(N + 1, -1);  
        for (int i = 0; i < N; ++i) {
            numToIndex[arr[i]] = i;
        }
        vector<int> rowPainted(m, 0), colPainted(n, 0);
        vector<int> rowPos(N), colPos(N);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int num = mat[i][j];
                int indexInArr = numToIndex[num];
                rowPos[indexInArr] = i;
                colPos[indexInArr] = j;
            }
        }
        for (int i = 0; i < N; ++i) {
            int num = arr[i];
            int rowIdx = rowPos[numToIndex[num]];
            int colIdx = colPos[numToIndex[num]];
            if (++rowPainted[rowIdx] == n || ++colPainted[colIdx] == m) {
                return i;
            }
        }

        return -1;
    }
    int firstCompleteInde(vector<int>& arr, vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<pair<int,int>> pos(m*n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int num=mat[i][j];
                pos[num-1]={i,j};
            }
        }
        vector<int> row(m,0),col(n,0);
        for(int i=0;i<arr.size();i++){
            int r=pos[arr[i]-1].first;
            int c=pos[arr[i]-1].second;
            row[r]++;
            col[c]++;
            int j=0;
            while(j<m && j<n){
                if(row[j]==n || col[j]==m) return i;
                j++;
            }
            while(j<m){
                if(row[j]==n) return i;
                j++;
            }
            while(j<n){
                if(col[j]==m) return i;
                j++;
            }
        }
        return 1;
    }
};