class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> col,row;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if((find(col.begin(),col.end(),j)!=col.end()) || (find(row.begin(),row.end(),i)!=row.end())){
                    matrix[i][j]=0;
                }
            }
        }
    }
};