class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(), perm = 0;
        n -= 1;
        int right, down, left, up;

        for(int i = perm; i < n-perm; i++) {
            for(int j = perm; j < n-perm; j++) {
                right = matrix[i][j];        down = matrix[j][n-i];
                left = matrix[n-i][n-j];     up = matrix[n-j][i];

                matrix[j][n-i] = right;
                matrix[n-i][n-j] = down;
                matrix[n-j][i] = left;
                matrix[i][j] = up;
            }

            perm++;
        }
        
    }
};
