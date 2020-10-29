     #include <iostream>
     #include <vector>
     #include <stack>
     #include <queue>
     #include <list>
     #include <map>
     #include <sstream>
     #include <algorithm>
     #include <stdio.h>
     #include <math.h>
     #include <iomanip>
     #include <limits.h>

     using namespace std;

     #define PI 3.1415926535897932384626433832795


     int main(){
         int H, W, N, M;
         cin >> H >> W >> N >> M;
         
         vector<vector<int>> image (H, vector<int> (W));
         vector<vector<int>> kernel (N, vector<int> (M));
         
         //taking in input for image
         for(int i =0; i < H; i++){
             for(int j = 0; j < W; j++){
                 cin >> image[i][j];
             }
         }
         
         //taking in input for kernel
         for(int i =0; i < N; i++){
             for(int j = 0; j < M; j++){
                 cin >> kernel[i][j];
             }
         }
         
         vector<vector<int>> resultant(H-N+1, vector<int> (W-M+1));
         
         //your code here
         
         for(int i =0; i < H-N+1; i++){
             for(int j =0; j < W-M+1; j++){
                 cout << resultant[i][j] << " ";
             }
             cout << "\n";
         }
         
         
     }
