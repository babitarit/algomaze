#include <iostream>
using namespace std;
class sak{
     
    public:
    int name;
    void print(){
        cout<<IQLevel;
    }
    private:
    int IQLevel;

   
};
int main (){

sak h1;
cout<<"size of object h1 :"<<sizeof(h1);

cout<<h1.name;

    return 0;
};