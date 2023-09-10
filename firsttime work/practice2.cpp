#include <iostream>
using namespace std;


int main ()
   {
//1) PRINTING FIBONACCI SERIES UPTO 1O TERMS
// int n=8;
// int a=0;
// int b=1;
// cout<<a<<endl;
// cout<<b<<endl;
// for(int i=1;i<=n;i++){
//    int value=a+b;
//    cout<<value<<endl;
//    a=b;
//    b=value;

// }


//2) SUBTRACT THE PROD AND SUM TO AN INTEGER
// int n;
// cin>>n;
// int sum=0;
// int prod=1;
// while(n!=0){
//    int rem=n%10;
//    sum=sum+rem;
//    prod=prod*rem;
//    n=n/10;
// }
// cout<<(prod-sum)<<endl;





//3)BINARY TO DECIMAL

//    APPROACH 1
// int n;
// cout<<"enter here binary no. ";
// cin>>n;
// int ans=0;
// int i=0;
// while(n!=0){
// int digit=n%10;
// if(digit==1){
//    ans=ans+pow(2,i);   FOR THIS WE HAVE TO INCLUDE MATH.H
// }
// n=n/10;
// i++;
// }
// cout<<ans<<endl;



//    APPROACH 2
// int n;
// cin>>n;
// int ans=0;
// int i=0;
// while(n!=0){
//    int bit= n&1;
//    if(bit==1){
//       ans=ans+(1<<i);
//    }
//    n=n>>1;
//    i++;
// }
// cout<<ans<<endl;




//4)DECIMAL TO BINARY

       // APPROACH 1
// int num;
// cin>>num;
// int rem;
// int i=0;
// int a[32];
// while(num!=0){
//    int rem= num % 2;
//    num=num/2;
//    a[i]=rem;
//    i++;
// }
// for(int j=i-1; j>=0;j--){
//    cout<<a[j];
// }


             // APPROACH 2
// int n;
// cin>>n;
// int i=0;
// int ans=0;
// while(n!=0){
//    int last_bits = n&1;
//    ans=(last_bits*pow(10,i))+ans;
//   n= n>>1;
//    i++;
// }
// cout<<ans<<endl;

           
          //5) MINI CALCULATOR

          //mistakes i did forgot about break; forget about '' this sign for each cases like * + etc
// int a,b;
// char operation;
//   cin>>a>>b>>operation;  
//   switch(operation) {
//    case '+': {
//       cout<<(a+b);
//       break;

//    }
//    case '-': {
//       cout<<(a-b);
//       break;

//    }
//    case '*': {
//       cout<<(a*b);
//       break;

//    }
//    case '/': {
//       cout<<(a/b);
// break;
//    }
//    default: cout<<"no operation matched";
//   }     



//6) greedy strategy total amount MONEY distribution problem
// int num;
// cin>>num;
// int rs100, rs50;

// switch(1){
//    case 1:{
//       rs100=num/100;
//       num=num%100;
//       cout<<"100 rpees notes are"<<rs100;
      
//    }
//    case 2 :{
//        rs50=num/50;
//        num=num%50;
//       cout<<"50 rpees notes are"<<rs50;
      
//    }

// }



//7) 
 




    return 0;
   }