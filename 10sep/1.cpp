#include <iostream>
using namespace std;
int main(){

    //brute force of two sum problem
int arr[4]={4,6,4,5};
int target;
cin>>target;
int f=0;
for(int i=0;i<4;i++){
for(int j=i+1;j<4;j++){
if(arr[i]+arr[j]==target){
    cout<<"true";
    f=1;
    break;
}
}
}
if(f==0){
    cout<<"false";
}
 return 0;
}