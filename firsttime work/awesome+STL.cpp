
//1) PROGRAM FOR GENERATION OF RANDOM NO.
// #include <iostream>
// #include <cstdlib> // for rand() and srand()
// #include <ctime>   // for time()
// using namespace std;
// int main() {
//     // Seed the random number generator with the current time
//     srand(time(NULL));

//     // Generate a random number between 0 and RAND_MAX
//     int randomNum = rand();

//     cout << "Random number: " << randomNum << endl;

//     return 0;
// }

// #include<iostream>
// #include <vector>
// using namespace std;
// int main(){

// vector<int>sak;
// cout<<sak.capacity();
// cout<<sak.size();
// sak.push_back(9);
// sak.push_back(5);
// sak.push_back(6);
// for(auto i:sak){
//     cout<<i;
// }

// cout<<sak.capacity();
// cout<<sak.size();
// sak.shrink_to_fit();
// cout<<sak.capacity();
// cout<<sak.size();
//     return 0;
// }



// #include<iostream>
// #include <deque>
// using namespace std;
// int main(){

//     deque<int>sak;
//     sak.push_back(8);
//     sak.push_front(2);
//     sak.push_back(9);
//     sak.push_front(1);
//     for(auto i:sak){
//         cout<<i<<endl;
//     }

//     cout<<sak.empty()<<endl;
//     sak.erase(sak.begin(),sak.begin()+1);

//      for(auto i:sak){
//         cout<<i<<endl;
//     }

//     return 0;
// }

// #include<iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(8);
//      v.push_back(9);
//       v.push_back(10);
//       for(int i:v){
//         cout<<i<<endl;
//       }
//       cout<<endl;
//       vector<int>copied(v);
//       for(int i:copied){
//         cout<<i<<endl;
//       }

//     return 0;
// }


//printing stack same way we can print queue and priority queue
// #include <iostream>
// #include <stack>

// int main() {
//     std::stack<int> myStack;

//     myStack.push(10);
//     myStack.push(20);
//     myStack.push(30);

//     while (!myStack.empty()) {
//         int topElement = myStack.top();
//         std::cout << topElement << " "; // Process or print the element
//         myStack.pop(); // Remove the element
//     }

//     return 0;
// }



//how to declare min heap priority queue
// #include <iostream>
// #include <queue> // Include the priority_queue header
// using namespace std;
// int main() {
//     // Declare a min-heap priority queue using a greater-than comparison
//     priority_queue<int, vector<int>, greater<int>> minHeap;
//  minHeap.push(2);
//     minHeap.push(10);
//     minHeap.push(30);
//     minHeap.push(20);
//      minHeap.push(4);
     

//     while (!minHeap.empty()) {
//         int minElement = minHeap.top();
//         std::cout << minElement << " "; // Process or print the minimum element
//         minHeap.pop(); // Remove the minimum element
//     }

//     return 0;
// }



//how to declare max heap priority queue
// #include <iostream>
// #include <queue> // Include the priority_queue header

// int main() {
//     // Declare a max-heap priority queue
//     std::priority_queue<int> maxHeap;
//   maxHeap.push(80);
//     maxHeap.push(100);
//     maxHeap.push(10);
//     maxHeap.push(30);
//     maxHeap.push(20);

//     while (!maxHeap.empty()) {
//         int maxElement = maxHeap.top();
//         std::cout << maxElement << " "; // Process or print the maximum element
//         maxHeap.pop(); // Remove the maximum element
//     }

//     return 0;
// }





