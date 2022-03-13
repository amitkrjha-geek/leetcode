class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
            if(rowIndex < 0) {
            	return row;
            }
            row.resize(rowIndex + 1);
            row[0] = row[rowIndex] = 1;
            for(int m =1; m < rowIndex /2 + 1; m++) {
            	row[m] = row[rowIndex - m] = ((long long int)row[m - 1] * (rowIndex - m + 1)) / m;
            }
            return row;
    }
};