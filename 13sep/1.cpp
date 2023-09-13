//largest element in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
// int arr[9]=  {2,8,4,5};
// sort(arr,arr+4);
// cout<<arr[3];


int arr[4]={100,8,7,6};
int maxElement=1;
for(int i=0;i<4;i++){
    if(arr[i]>maxElement){
        maxElement=arr[i];
    }
}
cout<<"maxelement is"<<maxElement;
    return 0;
}