using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if(n == matrix.size() && n == matrix[0].size() && n >= 1 && n <= 20){
            vector<vector<int>> mat(n, vector<int>(n));
            for(int i = 0;i < matrix.size();i++){
                for(int j = 0;j < matrix[0].size();j++){
                    if(matrix[i][j] >= -1000 && matrix[i][j] <= 1000){
                        mat[j][n-i-1] = matrix[i][j];
                    }
                }
            }
            matrix = mat;
        }
    }
};