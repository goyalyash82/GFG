class Solution{
public:
    vector<vector<int>> dir1 = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}};
    vector<vector<int>> dir2 = {{0,2},{1,2},{2,2},{-1,2},{-2,2},{0,-2},{1,-2},{2,-2},{-1,-2},
    {-2,-2},{2,0},{2,1},{2,-1},{-2,0},{-2,1},{-2,-1}};
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[]){
        vector<int> ans;
        
        
        for(int i=0;i<q;i++){
            auto it = queries[i];
            
            if(it[0] == 1){
                int sum = 0;
                
                for(auto a: dir1){
                    int x = it[1]+a[0];
                    int y = it[2]+a[1];
                    
                    if(x >= 0 && x < n && y >= 0 && y < m){
                        sum += mat[x][y];
                    }
                }
                ans.push_back(sum);
            }
            else if(it[0] == 2){
                int sum = 0;
                
                for(auto a: dir2){
                    int x = it[1]+a[0];
                    int y = it[2]+a[1];
                    
                    if(x >= 0 && x < n && y >= 0 && y < m){
                        sum += mat[x][y];
                    }
                }
                ans.push_back(sum);
            }
        }
        return ans;
    }
};