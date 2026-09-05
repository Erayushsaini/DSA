#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

bool IsPossible(vector<int> &arr,int n,int cows,int minimumDisPossible){
    int lastStall=arr[0];
    int cowsPlaced=1;

    for(int i=1;i<n;i++){
        if(arr[i]-lastStall>=minimumDisPossible){
            cowsPlaced++;
            lastStall=arr[i];
        }
        if(cows==cowsPlaced){
            return true;
        }

    }
    return false;
    
}
int maxDistance(vector<int> &arr,int cows,int n ){
    sort(arr.begin(),arr.end());


    int str=1,end=arr[n-1]-arr[0];
    int ans=-1;

    while(str<=end){
        int mid=str +(end-str)/2;

        if(IsPossible(arr,n,cows,mid)){
            str=mid+1;
            ans=mid;
        }else{
            end=mid-1;
        }
    }return ans;

}
int main(){
    vector<int> arr={1,2,8,4,9};
    int c=3;
    int n=5;
    cout<<maxDistance(arr,c,n);
    return 0;
}