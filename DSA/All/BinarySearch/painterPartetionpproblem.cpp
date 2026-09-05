#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

bool IsValid(vector<int> &arr,int N ,int M, int mid){
    int painters=1;
    int time=0;

    for(int i=0;i<N;i++){
        if((arr[i]+time)<=mid){
            time+=arr[i];
        
        }
        else{
            painters++;
            time=arr[i];
        }

    }
    if(painters==M){
        return true;
    }
    return false;

}
int miniTimePossible(vector<int> &arr,int N,int M){
        int maxTime=INT_MIN;
    int Sum=0;
    for(int i=0;i<N;i++){
        Sum+=arr[i];
        maxTime=max(maxTime,arr[i]);
    }
    int str=maxTime,end=Sum;
    int ans=-1;

    while(str<=end){
        int mid=str+(end-str)/2;

        if(IsValid(arr,N,M,mid)){
            ans = mid;
            end=mid-1;
        }else{
            str=mid+1;
        }
    }
    return ans;


}
int main(){
    vector<int> arr={40,30,10,20};
    int N = 4;
    int M=2;
    cout<<miniTimePossible(arr,N,M);

    return 0;
}