#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



//rotate an array to left by one place 

//brute force  //is taking the another array and copying take 0(n)  space and time complexity

// //optimal
// int main() {
//     vector<int> num ={1,2,3,4,5,6,7};
//     int n=7;

//     int temp=num[0];

//     for(int i=0;i<n;i++) {
//         num[i]=num[i+1];
//     }
//     num[n-1]=temp;

//     return 0;
// }


// //rotate the array by the k place 

// //same brute

// int main() {
//     vector<int> num ={1,2,3,4,5,6,7};
//     int n=7;

//     int k=3;  //if the k is more than the size of the array then we have to rotate the array only for 
//     int rot=k%n; //as for rotation for the size of array same array come 


//     vector<int> temp;
//     for(int i=0;i<=rot;i++) {
//         temp.push_back(num[i]);
//     }

//     int j=0;  //one way is this using the j or other way 
//     for(int i=n-rot;i<n;i++) {
//         num[j]=num[i];  //or other way is num[i-(n-rot)]=num[i]
//         j++;
//     }

//     for(int i=n-rot;i<n;i++) {
//         num[i]=temp[i-(n-rot)];
//     }

//     return 0;
// }


//most optimal approach 

// int main() {
//     vector<int> num ={1,2,3,4,5,6,7};

//     int n=7;
//     int k=3;

//     int rot=k%n;

//     reverse(num.begin(),num.begin()+rot);
//     reverse(num.begin()+rot,num.end());

//     reverse(num.begin(),num.end());

//     for(int val:num) {
//         cout<<val<<"";
//     }

// }

//for the rotation in the right

//just reverse of the left 


// brute force  //is taking the another array and copying take 0(n)  space and time complexity

// //optimal
// int main() {
//     vector<int> num ={1,2,3,4,5,6,7};
//     int n=7;

//     int temp=num[n-1];

//     for(int i=n-1;i>=0;i--) {
//         num[n-1]=num[n-2];
//     }
//     num[0]=temp;

//     return 0;
// }


// //rotate the array by the k place 

// //same brute

// int main() {
//     vector<int> num ={1,2,3,4,5,6,7};
//     int n=7;

//     int k=3;  //if the k is more than the size of the array then we have to rotate the array only for 
//     int rot=k%n; //as for rotation for the size of array same array come 


//     vector<int> temp;
//     for(int i=n-1;i<=n-rot;i--) {
//         temp.push_back(num[i]);
//     }

//     int j=n-1;  //one way is this using the j or other way 
//     for(int i=n-rot-1;i<n;i--) {
//         num[j]=num[i];  //or other way is num[i-(n-rot)]=num[i]
//         j--;
//     }

//     for(int i=0;i<rot;i++) {
//         num[i]=temp[i];
//     }

//     return 0;
// }


// most optimal approach 

int main() {
    vector<int> num ={1,2,3,4,5,6,7};

    int n=7;
    int k=3;

    int rot=k%n;

    reverse(num.begin(),num.begin()+(n-rot));
    reverse(num.begin()+(n-rot),num.end());

    reverse(num.begin(),num.end());

    for(int val:num) {
        cout<<val<<"";
    }

}
