#include<iostream>
using namespace std;
#include<vector>

//BRUTE FORCE CODE


int main(){
    int arr[4] = {2,7,11,15};
    int size=4;
    int target = 9;
    vector <int> vec;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;i<size;j++){
            if(arr[i]+arr[j]==target){
                vec.push_back(i);
                vec.push_back(j);
                cout<<i<<","<<j<<endl;
            }
        }
    }
}