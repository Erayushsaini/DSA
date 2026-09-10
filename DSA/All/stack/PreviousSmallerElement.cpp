#include<iostream> 
#include<stack>
#include<vector>
using namespace std;


int main() {

    vector<int> nums={29,2,23,4,98,6,7};
    vector<int> NG(nums.size()); //this is intialized by the 0 //we can also use the unordered map for this 


    stack<int> s;

    for(int i=0;i<nums.size();i++) {
        
        while(s.size()>0 && nums[i]<s.top()) {
            s.pop();
        }
        if(s.empty()) {
            NG[i]=-1;
            s.push(nums[i]);
        }else {
            NG[i]=s.top();
            s.push(nums[i]);
        }
    }

    for(int num:NG) {
        cout<<num<<endl;
    }
    return 0;
}