#include <iostream>
using namespace std;
int main ()
    {
        //1 PROGRAM FOR SUM OF TWO NUM
// int a,b;
// cin>>a>>b;
// cout<<endl;
// cout<<a+b<<endl;


       //2 CALCULATING S.I
// float p,t,r;
// cin>>p>>t>>r;
// float ans = ((p*t*r)/100);
// cout<<ans;


       //3 NO IS +, -, OR 0
//   int a;
//   cin>>a;
//   if(a>0)    {
//     cout<<"positive no.";
//   } 
//  else if (a<0)    {
//     cout<<"negative no.";
//   } 

//  else   {
//     cout<<"zero no.";
//   } 


      //4 I/P = N   ,PRINT 1 TO N
// int a;
// cin >>a;
// for( int i=1 ; i<=a ;i++){
//     cout<<i<<endl;
// }

      
      //5  PRINT ALL EVEN NO. B/W 1 TO N IF N IS OUR I/P

                      //APPROACH -1
// int num;
// cin>>num;
// for(int i=1 ;i<=num ; i++){
//     if(i%2 == 0){
//         cout<<i<<endl;
//     }
// }



                    //APPROACH-2
// int a;
// cin>>a;
// for(int i=2 ; i<= a ; i=i+2){
//     cout<<i<<endl;
// }



        //6 SUM FROM 1 TO N , IF I/P IS N
//   int a;
//   cin>>a;
//       int sum =0;
//   for(int i=1; i<=a; i++)  {

//     sum=sum+i;
//   } 
//   cout<<"final Sum "" "  <<sum; 

// we cannot write int sum =0 inside for loop becoz if we do and then when we cout sum then it will show sum variable in not defined (variable scope ki baaat hai)


      
          //7 CHECK GIVEN NO. IS PRIME OR NOT 

                    // APPROACH-1   (not at all a good practice it print all no. b/w 2 to n by telling this is prime this is not but not tell only specifically about given no whether it is prime or not)
//   int a;
//   cin>>a;
//   for(int i=2;i<a;i++)  {
// if(a%i ==0){
//     cout<<"not prime ";
// }

//   }
//   cout<<"prime";



                         // APPROACH -2
                         //YAE APPROACH 1ST KAE PROBLEM KO THO SOLVE KAR RAHA THA BUT IT NOT SHOW CORRECT O/P FOR ONLY ONE I/P I.E 2
                         //so i/p 2 return karae prime for that i had to wite if condition outside for loop i.e if(a==2)
                         
//   int a;
//   cin>>a;
//   if(a==2){
//         cout<<"prime";
//   }
//   for(int i=2;i<a;i++)  {
// if(a%i ==0){
//     cout<<"not prime ";
//     break;
// }
// else {
//         cout<<"prime";
//         break;
// }
//   }

  

                   //APPROACH-3
     //ONE OF THE BEST OPTIMIZED CODE FOR PRIME AND NOT PRIME
//     int n;
//     bool is_prime = true;
//     cin>>n;
    //0 and 1 are not prime no.
        // if(n==0 || n==1){
        //         is_prime = false;
        // }
        //loop to check n is prime or not
// for(int i=2;i<=n/2;i++){
//         if(n%i==0){
//                 is_prime = false;
//                 break;
//         }
// }
// if(is_prime){
//         cout<<"prime";
// }
// else{
//         cout<<"not prime";
// }






// int a = 12345;
// cout<<sizeof(a);
//o/p = 4






           //8    FARENHIDE TO celsius

// float farenhide;
// cin>>farenhide;
// float celsius =((farenhide-32)*5)/9;
// cout<<celsius;



          //9    PRINT SUM OF ALL EVEN NO. IF N IS I/P
// int n;
// cin>>n;
// int sum =0;
// for(int i=0;i<=n;i=i+2){
// sum= sum+i;
// }
// cout<<sum<<endl;


          //10 PRINT GIVEN CHAR IS IN LOWERCASE OR UPPERCASE OR A NUMERIC VALUE B/W 0 TO 9
 




           //11 PATTERN



//1) FIRST  ****
//          ****
//          ****
//          ****

// int n;
// cin>>n;
//  for(int row=1;row<=n;row++){
//        for(int col=1;col<=n;col++){
//               cout<<"*";
//        }
//        cout<<endl;
//  }



//2) SECOND
//111
//222
//333



// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=n;col++){
//                cout<<row;
//        }
//        cout<<endl;
//   }



//3) THIRD
// 123
//123
//123
// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=n;col++){
//                cout<<col;
//        }
//        cout<<endl;
//   }


  //4) fouRTH
  //321
  //321
  //321
//   int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=n;col++){
//                cout<<(n-col+1);             // concept logic in this line
              
               
//        }
//        cout<<endl;
//   }





//5) FIFTH
//123
//456
//789

// int n;
// cin>>n;
//     int num=1;
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=n;col++){
            
//                cout<<num<<"";
//                num++;
//        }
//        cout<<endl;
//   }







//6) SIXTH
//*
//**
//***
//**** for i/p =4

// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//                cout<<"*";
//        }
//        cout<<endl;
//   }






//7) SEventh
//1
//22
//333 FOR I/P= 3

// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//                cout<<row;
//        }
//        cout<<endl;
//   }






//8) EIGHT
//1
//23
//456 FOR I/P= 3




// int n;
// cin>>n;
// int value=1;
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//                cout<<value<<"";
//                value++;
              
//        }
//        cout<<endl;
//   }






//9) NINE
//1
//23
//345
//4567 FOR I/P= 4



// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//                int value=row;
//         for(int col=1;col<=row;col++){
//                cout<<value<<"";
//                value++;
//        }
//        cout<<endl;
//   }





//10) TENTH
//1
//21
//321


// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//        int value=row;
//         for(int col=1;col<=row;col++){
//                cout<<value<<"";
//                value--;
//        }
//        cout<<endl;
//   }







//11) ELEVENTH
//AAA
//BBB
//CCC



// int n;
// cin>>n;
// char value='A';
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=n;col++){
//                cout<<value<<"";

//        }
//        value++;
//        cout<<endl;
//   }





//12) TWELEVETH
//ABC
//DEF
//GHI



// int n;
// cin>>n;
// char value='A';
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=n;col++){
//                cout<<value<<"";
//                value++;
//        }
//        cout<<endl;
//   }







//13) THIRTHTEEN
//ABC
//ABC
//ABC



// int n;
// cin>>n;

// for(int row=1;row<=n;row++){
//         char value='A';
//         for(int col=1;col<=n;col++){
//                cout<<value<<"";
//                value++;
//        }
//        cout<<endl;
//   }




//14) FOURTEENTH
//ABC
//BCD
//CDE

//NOT WORKING

// int n;
// cin>>n;

// for(int row=1;row<=n;row++){
//         char ch ='A';
//         for(int col=1;col<=n;col++){
//                cout<<ch<<"";
//        ch++;
//        }
//        cout<<endl;
// ch++;
//   }






//15) fifteenth
//123
//234
//345


// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//        int value=row;
//         for(int col=1;col<=n;col++){
//                cout<<value<<"";
//                value++;
//        }
//        cout<<endl;
//   }





//16) SIXTEENTH
//A
//AB
//ABC


// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//         char value='A';
//         for(int col=1;col<=row;col++){
//                cout<<value<<"";
//                 value++;

//        }
              
//        cout<<endl;
//   }


  

//17) seventeenth
//A
//BB
//CCC


// int n;
// cin>>n;
// char value='A';
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//                cout<<value<<"";
//        }
//        cout<<endl;
//                value++;
//   }





//18) eighteenth
//A
//BC
//DEF


// int n;
// cin>>n;
// char value='A';
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//                cout<<value<<"";
//                value++;
//        }
//        cout<<endl;
//   }





//19) NIETEENTH
//D
//CD
//BCD
//ABCD


// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//        int value=row;
//         for(int col=1;col<=n;col++){
//                cout<<value<<"";
//                value++;
//        }
//        cout<<endl;
//   }





//20) twentieth
//A
//BC
//CDE
//DEFG


// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//                cout<<value<<"";
//                value++;
//        }
//        cout<<endl;
//   }





//21) twenty first
//- - - *
//- - * *
//- * * *
//* * * *

//HERE WE NEED TWO LOOP ONE WILL NEED TO PRINT SPACE AND OTHER WILL PRINT STAR
// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//                cout<<*<<"";
//        }
//        cout<<endl;
//   }





// /22) twenty second
//****
//***
//**
//*


// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//                cout<<value<<"";
//                value++;
//        }
//        cout<<endl;
//   }




// /23) twenty third
//****
//-***
//--**
//---*


// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//                cout<<value<<"";
//                value++;
//        }
//        cout<<endl;
//   }



// /24) twenty fourth
//1111
//-222
//--33
//---4


// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//                cout<<value<<"";
//                value++;
//        }
//        cout<<endl;
//   }




// /25) twenty fifth
//---1
//--22
//-333
//4444


// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//                cout<<value<<"";
//                value++;
//        }
//        cout<<endl;
//   }






// /26) twenty sixth
//1234
//-234
//--34
//---4


// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//                cout<<value<<"";
//                value++;
//        }
//        cout<<endl;
//   }






// /27) twenty seventh
//---1
//--23
//-456
//78910


// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//                cout<<value<<"";
//                value++;
//        }
//        cout<<endl;
//   }




// /28) twenty eighth
//1234554321
//1234**4321
//123****321
//12******21
//1********1


// int n;
// cin>>n;
// for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//                cout<<value<<"";
//                value++;
//        }
//        cout<<endl;
//   }

       

        return 0;
    }