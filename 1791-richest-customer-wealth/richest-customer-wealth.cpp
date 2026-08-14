class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows=accounts.size();
        int columns=accounts[0].size();
        int sum=0,total=0;

        for(int i=0;i<rows;i++){
            total=0;
            for(int j=0;j<columns;j++){

                total+=accounts[i][j];
                

            }
            if(sum<total){
                sum=total;
            }
        }
        return sum;
    }
};