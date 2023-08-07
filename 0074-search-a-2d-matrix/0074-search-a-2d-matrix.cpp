class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int r = matrix.size();
int c = matrix[0].size();

    int i = r - 1;
    int j = 0;
    
    while(i >= 0 && j < c){
        if(matrix[i][j] == target){
            return true;
        }
        
        else if(matrix[i][j] > target){
            i--;
        }
        
        else if(matrix[i][j] < target){
            j++;
        }
    }
    return false;
    }
};