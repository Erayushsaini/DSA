#include <iostream>
using namespace std;
#include<vector>
#include<climits>

//ALL POSSIBLE SUBARRAY




// int main() {
//     int n=5;
//     int arr[5] = {1,2,3,4,5};


//     for(int st=0;st<n;st++){
//         for(int end=st;end<n;end++){
//             for(int i=st;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
   
//     }
//     return 0;
// }



//MAXIMUM SUBARRAY SUM BRUTE FORCE APPROACH 


// int main() {
//     int n=5;
//     int arr[5] = {1,2,3,4,-5};
//     int maxSum=INT_MIN;
//     for(int st=0;st<n;st++){
//         int currentSum = 0;
// //         for(int end=st;end<n;end++){
// //             currentSum+=arr[end];
// //             maxSum=max(currentSum,maxSum);
// //         }
// //     }
// //     cout<<maxSum<<endl;
// //     return 0;
// // }



// //KADANE'S ALGORITHM

// int main(){
//     int n=10;
//     int arr[10] = {-2,1,-3,4,-1,2,1,1,-5,4};
//     int currentSum = 0;
//     int maxSum=INT_MIN;
//     for(int i=0;i<n;i++){
//         currentSum+=arr[i];
//         maxSum=max(currentSum,maxSum);
//         if(currentSum<0){
//             currentSum=0;
//         }
//     }
//     cout<<maxSum<<endl;
// }