class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int size = row*col;
        int cnt = 0;

        vector<int> ans;

        int startrow= 0;
        int startcol = 0;
        int endrow = row -1;
        int endcol = col-1;

        while(cnt<size){
            //traverse the top row
            for(int index = startcol; index<=endcol  && cnt<size; index++){
                ans.push_back(matrix[startrow][index]);
                cnt++;
            }
            startrow++;
            //traverse last col;
            for(int index = startrow; index<=endrow && cnt<size; index++){
                ans.push_back(matrix[index][endcol]);
                cnt++;
            }
            endcol--;
            //traverse last row
            for(int index = endcol; index>= startcol  && cnt<size; index--){
                ans.push_back(matrix[endrow][index]);
                cnt++;
            }
            endrow--;
            //traverse first col
            for(int index = endrow; index>= startrow  && cnt<size; index--){
                ans.push_back(matrix[index][startcol]);
                cnt++;
            }
            startcol++;
        }
        return ans;
    }
};