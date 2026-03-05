class Solution {
    public:
        int count=0;

        int traverse(int n,int m,int start,int end,vector<vector<int>>& visited)
    {

        if(start>=n || end>=m)
        {
            return 0;
        }
        if(start==n-1 && end==m-1)
        {
            return 1;
        }
        if(visited[start][end]!=-1)
        {
            return visited[start][end];
        }
        int left=traverse(n,m,start+1,end,visited);
        int right=traverse(n,m,start,end+1,visited);

        return visited[start][end]=left+right;
}
    int uniquePaths(int n,int m) {
      vector<vector<int>> visited(n,vector<int>(m,-1));
      return traverse(n,m,0,0,visited); 
    }
};