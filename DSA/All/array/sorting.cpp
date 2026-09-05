#include<iostream>
using namespace std;







// //BUBBLE SORT
// void bubbeleSort(int arr[],int n){

//     for(int i=0;i<n-1;i++){
// //    one optimization
//         bool isSwap=false;
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 isSwap=true;
//             }
//         if(isSwap==false){
//              cout<<"arr already sorted"<<endl;     //optimization
//              return;
// }
//         }
//     }
// }



// // SELECTION SORT


// void selectionSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int SI=i;//starting index of the unsorted array
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[SI]){
//                 SI=j;
// //             }
// //         }swap(arr[i],arr[SI]);
// //     }
      
// // }

// //INSERTION SORT


// // void insertionSort(int arr[],int n){
// //     for(int i=1;i<n;i++){
// //         int curr=arr[i];
// //         int prev=i-1;
// //         while(prev>=0 && arr[prev]>curr){
// //             arr[prev+1]=arr[prev];
// //             prev--;
// //         }   
// //         arr[prev+1]=curr;
// //      }
// // }






// void printArr(int arr[],int n){

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }cout<<endl;
// }
// int main(){
//     int arr[]={4,1,3,2,5};
//     // bubbeleSort(arr,5);
//     // selectionSort(arr,5);
//     insertionSort(arr,5);
//     printArr(arr,5);
    
//     return 0;
// }




