#include<iostream>
#include<vector>
using namespace std; 



//iterative approach


// int binarySearch(vector<int> nums,int target){
//     int str=0,end=nums.size()-1;
//     while(str<=end){
//         int mid=(str+end)/2;
//         if(nums[mid]==target){
//             return mid;
//         }
//         else if(nums[mid]<target){
//             str=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     return -1;
// }


// //recursive approach
// int binaryrecsearch(vector<int> nums,int target,int str,int end){
//     if(str<=end){
//         int mid=str+(end-str)/2;
//         if(target>nums[mid]){
//             return binaryrecsearch(nums,target,mid+1,end);
//         }else if(target<nums[mid]){
//             return binaryrecsearch(nums,target,str,mid+1);
//         }else{
//             return mid;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> nums1={1,2,4,5,6,7,9,11,13};
//     // cout<<binarySearch(nums1,9)<<endl;
//     cout<<binaryrecsearch(nums1,11,0,nums1.size()-1)<<endl;
//     vector<int> nums2={1,2,4,5,6,7,9,11,13,89,98};
//     // cout<<binarySearch(nums2,89)<<endl;
//     return 0;

// }