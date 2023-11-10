// #include<iostream>
// #include<algorithm>
#include <bits/stdc++.h>
using namespace std;


    //two pointer approach
int main(){
int arr[5]={3,9,1,5,2};
int target;
cin>>target;
sort(arr,arr+5);
int i=0;
int j=4;
int f=0;
while(i<j){
if(arr[i]+arr[j]==target){
    cout<<"true";
    f=1;
    break;  //donot forget this else it will become infinite loop
}
else if(arr[i]+arr[j]>target){
    j--;
}
else{
    i++;
}
}
if(f==0){
    cout<<"false";
}
   return 0;
}