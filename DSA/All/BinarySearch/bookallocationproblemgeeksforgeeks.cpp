#include<iostream>
#include<vector>
using namespace std;
#include<limits.h>


// book allocation problem 


bool IsValid(vector<int> &books,int student,int mid,int n){
    int st=1;
    int pages=0;
    for(int i=0;i<n;i++){
        if(books[i]>mid){
            return false;
        }
        if(pages+books[i]<=mid){
            pages+=books[i];
        }else{
            st++;
            pages=books[i];
        }
    }
    if(st>student){
        return false;
    }else{
        return true;
    }
        //return st>mid ? false:true; //terniary statement
    
}


int bookAllocation(vector<int> &books,int n,int student){
    int str=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=books[i];
    }
    int end=sum;
    int ans=-1;
    if(student>n){
        return -1;
    }

    while(str<=end){
        int mid=str+(end - str)/2;
        if(IsValid(books,student,mid,n)){
            ans=mid;
            end=mid-1;
        }else{
            str=mid+1;
        }
    }
    return ans;
    
}



int main(){
    vector<int> books={2,1,3,4};
    int student=2;
    int n=4;
    cout<<bookAllocation(books,n,student);
    return 0;
}
