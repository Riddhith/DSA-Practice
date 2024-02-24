class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // Write your code here.
	//brute force tc=(n*m)(m+n)+(m*n)
	/*
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				for(int k=0;k<n;k++){
					if(matrix[k][j]!=0){
						matrix[k][j]=-1;
					}
				}
				for(int l=0;l<m;l++){
					if(matrix[i][l]!=0){
						matrix[i][l]=-1;
					}
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==-1){
				matrix[i][j]=0;
			}
		}
	}
	*/
	//better tc=O(2*m*n)
	/*
	vector<int> row(n,0);
	vector<int> col(m,0);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				row[i]=1;
				col[j]=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(row[i] || col[j]){
				matrix[i][j]=0;
			}
		}
	}
	*/
	// int col[m]={0}; -> matrix[0][..]
	// int row[n]={0}; -> matrix[..][0]
	//optimal tc=O((m*n)+(m-1)*(n-1)+m+n) sc=O(1)        (chap ache)
    int n=matrix.size();
    int m=matrix[0].size();
	int col0=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				//mark the i-th row
				matrix[i][0]=0;
				//mark the j-th col
				if(j!=0){
					matrix[0][j]=0;
				}
				else{
					col0=0;
				}
			}
		}
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			if(matrix[i][j]!=0){
				if(matrix[i][0]==0 || matrix[0][j]==0){
					matrix[i][j]=0;
				}
			}
			
		}
	}
	if(matrix[0][0]==0){
		for(int j=0;j<m;j++){
			matrix[0][j]=0;
		}
	}
	if(col0==0){
		for(int i=0;i<n;i++){
			matrix[i][0]=0;
		}
	}
	// return matrix;
    }
};