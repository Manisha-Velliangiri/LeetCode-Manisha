class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>ans;

        for(int i=0;i<numRows;i++){
// rows(i+1,1)=> size is i+1, fill all the values as 1
            vector<int>rows(i+1,1);
//till i=2 ,j does not work
            for(int j=1;j<i;j++){
               
               rows[j]=ans[i-1][j]+ans[i-1][j-1];

            }
            ans.push_back(rows);
        }
        return ans;
    }
};