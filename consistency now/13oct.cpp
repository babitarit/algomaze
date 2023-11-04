#include <iostream>
using namespace std ;

class mom{
    
    
public:
int chappal;
private:
int loveparameter;

public:
int getloveparameter(){
    return loveparameter;
}

int setloveparameter(int h){
 loveparameter=h;
}

void print(){
    loveparameter=6;
    cout<<loveparameter<<endl;
}

public:
mom(){
    cout<<"Constructor hu mai"<<endl;
}





};

int main(){

mom h;

cout<<h.getloveparameter();



    return 0;
}