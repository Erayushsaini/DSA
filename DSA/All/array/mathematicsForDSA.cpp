#include<iostream>
using namespace std;



//prime no 

// int main(){
//     int n=10;


//     for(int i=2;i<n;i++){
//         bool isPrime=true;

//         for(int j=2;j*j<=i;j++){
//             if(i%j==0){
//                 isPrime=false;
//                 break;
//             }
//         }
//         if(isPrime==true){
//             cout<<i<<"is prime"<<endl;
//         }
        
//     }
//     return 0;
// }


//digits of the number 

//armstrong number 


//gcd (greatest common divisor )or hcf



// int main(){
//     int a= 20;
//     int b= 28;

//     int gcd=0;

//     //some edge cases 

//     if(a==0 && b!=0){
//         gcd=b;
//     }
//     if(a!=0 && b==0){
//         gcd=a;
//     }
//     if(a==b){
//         gcd=a;
//     }

//     for(int i=1;i<min(a,b);i++){
//         if(a%i==0  &&  b%i==0){
//             gcd=i;
//         }
//     }
//     cout<<gcd<<endl;

//     return 0;
// }


//optimized approach is euclids algorithms 


// int gcd(int a ,int b){
//     while(a>0 && b>0){
//         if(a>b){
//             a=a%b;
//         }else{
//             b=b%a;
//         }
//     }
//     if(a==0) return b;
//     return a;
// }

// int gcdrec(int a ,int b){//assume b is smaller number 
//     if(b==0){
//         return a;
//     }
//     return gcdrec(b,a%b);
// }

// int main(){
//     int a=20;
//     int b=28;
//     cout<<gcd(a,b);
//     cout<<gcdrec(b,a);
//     return 0;
// }


//lcm



//reverse a number 