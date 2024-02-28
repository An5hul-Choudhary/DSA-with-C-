bool isSafe(vector<vector<int>> &m, int row , int col, int i, int j, vector<vector<bool>> &visited ){
    if((i>=0 && i<row) &&(j>=0 && j<col) && (visited[i][j]=false) && (m[i][j]==1)){
        return true;
    }
    else{
        return false;
    }
}

void solveMaze(vector<vector<int>> &m, int row , int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output ){
    
    //base
    if(i==row-1 && j==col-1){
        path.push_back(output);
        return;
    }
    
    // Right move -> i, j+1
    if(isSafe( m, row, col, i, j+1, visited )){
        visited[i][j+1]=true;
        // Recursion
        solveMaze(m, row, col, i, j+1, visited, path, output+'R');
        //backtracking
        visited[i][j+1]=false;
    }
    
    // Down move -> i+1, j
    if(isSafe( m, row, col, i+1, j, visited) ){
        visited[i+1][j]=true;
        // Recursion
        solveMaze(m, row, col, i+1, j, visited, path, output+'D');
        //backtracking
        visited[i+1][j]=false;
    }
    
    // Left move -> i, j-1
    if(isSafe( m, row, col, i, j-1, visited) ){
        visited[i][j-1]=true;
        // Recursion
        solveMaze(m, row, col, i, j-1, visited, path, output+'L');
        //backtracking
        visited[i][j-1]=false;
    }
    
    // Up move -> i-1, j
    if(isSafe( m, row, col, i-1, j, visited) ){
        visited[i-1][j]=true;
        // Recursion
        solveMaze(m, row, col, i-1, j, visited, path, output+"U");
        //backtracking
        visited[i-1][j]=false;
    }
}

    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        int row=n;
        int col=n;
        
        
        vector<string> path;
        string output="";
        
        
        vector<vector<bool>> visited(row,vector<bool>(col,false));
        
        
        if(m[0][0]=0){
            return path;
        }
        
        visited[0][0]=true;
        
        solveMaze(m, row, col,0,0, visited, path, output);
        
        
          return path;
        
        
    }
};