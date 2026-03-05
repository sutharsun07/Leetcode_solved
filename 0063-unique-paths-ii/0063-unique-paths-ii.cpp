class Solution {
public:
int count=0;

int traverse(vector<vector<int>>& grid,int n,int m,int start,int end,vector<vector<int>>& visited)
{

    if(start>=n || end>=m)
    {
        return 0;
    }
    if(start==n-1 && end==m-1)
    {
            return 1;
    }
    if(grid[start][end]==1)
    {
        return 0;
    }
    if(visited[start][end]!=-1)
    {
        return visited[start][end];
    }
        int left=traverse(grid,n,m,start+1,end,visited);
        int right=traverse(grid,n,m,start,end+1,visited);

        return visited[start][end]=left+right;
}
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
      int n=grid.size();
      int m=grid[0].size();
      if(grid[0][0]==1 || grid[n-1][m-1]==1)
      {
        return 0;
      }
      vector<vector<int>> visited(n,vector<int>(m,-1));
      return traverse(grid,n,m,0,0,visited); 
    }
};