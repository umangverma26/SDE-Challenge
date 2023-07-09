/*  the code generates Pascal's triangle with the number of rows specified by the "numRows" parameter. It uses nested loops to calculate each 
element of the trianglebased on the elements in the previous row. The resulting triangle is stored in a two-dimensional 
vector and returned as the output of the function */
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);
        for(int i=0;i<numRows;i++){
            r[i].resize(i+1);  // for i=0; resize to 1 to have 1 element
            r[i][0]=r[i][i]=1;  // setting first and last element as 1

        for(int j=1;j<i;j++){
            r[i][j]= r[i-1][j-1]+r[i-1][j];  // calculating element by sum of previous element on above of element
        }
        }
        return r;
        
    }
};
