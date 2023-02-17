// Spiral Matrix code on 2d array just the class solution
#include<iostream>
#include<vector>
using namespace std; 
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        int total = row*col;
        
        int s_row = 0;
        int s_col= 0;
        int e_row = row-1;
        int e_col = col-1;
        
        while(count < total){
            
            for( int index = s_col; count < total && index <= e_col; index++){
                ans.push_back(matrix[s_row][index]);
                count++;
            }
            s_row++;
        
            for( int index = s_row; count < total && index <= e_row; index++){
                ans.push_back(matrix[index][e_col]);
                count++;
            }
            e_col--;
        
            for( int index = e_col; count < total && index >= s_col; index--){
                ans.push_back(matrix[e_row][index]);
                count++;
            }
            e_row--;

            for( int index = e_row; count < total && index >= s_row; index--){
                ans.push_back(matrix[index][s_col]);
                count++;
            }
            s_col++;
         
        }
        return ans;
    }
    
};