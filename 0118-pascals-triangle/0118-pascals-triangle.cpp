class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(numRows<1)
            return   vector<vector<int>> ();
        res.push_back(vector<int>{1});
        for(int row=1;row<numRows;row++)
        {
            res.push_back(vector<int>());
            for(int col=0;col<=row;col++)
            {
                if(col==0|| col==row)
                    res[row].push_back(1);
                else
                    res[row].push_back(res[row-1][col-1]+res[row-1][col]);
            }
        }
        return res;
    }
};