//approach 1

// class Solution {
//   public:

//     void getpath(vector<vector<int>>& maze,string path,vector<string>& ans,vector<vector<bool>>& visitor,int row ,int col,int n ) {
    
//     //base for the valid condition

//         if(row<0 || col<0 || row>=n ||col>=n || maze[row][col]==0 || visitor[row][col]==true) {
//             return;
//         }

// //base for the path push 
//         if(row==n-1 && col==n-1) {
//             ans.push_back(path);
//             return;
//         }

//         visitor[row][col]=true;
//         //right 
        
//         getpath(maze,path+"R",ans,visitor,row,col+1,n);
            
//         //down
//         getpath(maze,path+"D",ans,visitor,row+1,col,n);
            
//         //left
//         getpath(maze,path+"L",ans,visitor,row,col-1,n);
        
//         //up
//         getpath(maze,path+"U",ans,visitor,row-1,col,n);
            
//         visitor[row][col]=false;
//     }

       


//     vector<string> ratInMaze(vector<vector<int>>& maze) {
//         string path="";
//         vector<string> ans;

//         int n=maze.size();

//         vector<vector<bool>> visitor (n,vector<bool>(n,false));

//         getpath(maze,path,ans,visitor,0,0,n);

// //for the lexographical order 
//         sort(ans.begin(),ans.end());
//         return ans;

//     }
// };



//approach 2 optimized without using the visitor 



// class Solution {
//   public:

//     void getpath(vector<vector<int>>& maze,string path,vector<string>& ans,int row ,int col,int n ) {
    
//     //base for the valid condition

//         if(row<0 || col<0 || row>=n ||col>=n || maze[row][col]==0 ) {
//             return;
//         }

// //base for the path push 
//         if(row==n-1 && col==n-1) {
//             ans.push_back(path);
//             return;
//         }

//         maze[row][col]=0;
//         //right 
        
//         getpath(maze,path+"R",ans,row,col+1,n);
            
//         //down
//         getpath(maze,path+"D",ans,row+1,col,n);
            
//         //left
//         getpath(maze,path+"L",ans,row,col-1,n);
        
//         //up
//         getpath(maze,path+"U",ans,row-1,col,n);
            
//         maze[row][col]=1;
//     }

       


//     vector<string> ratInMaze(vector<vector<int>>& maze) {
//         string path="";
//         vector<string> ans;

//         int n=maze.size();

        

//         getpath(maze,path,ans,0,0,n);

// //for the lexographical order 
//         sort(ans.begin(),ans.end());
//         return ans;

//     }
// };

