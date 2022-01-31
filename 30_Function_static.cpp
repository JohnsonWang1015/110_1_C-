#include <iostream>

using namespace std;

int* f1(int&, int&);

int main(){

    int x=2, y=5;
    cout<<"(x,y)=("<<x<<","<<y<<")"<<endl;
    int* pcnt = f1(x, y);
    cout<<"pcnt = "<<pcnt<<endl;
    cout<<"(x,y)=("<<x<<","<<y<<")"<<endl;
    cout<<"f1.cnt = "<<*pcnt<<endl;

    pcnt = f1(x, y);
    cout<<"pcnt = "<<pcnt<<endl;
    cout<<"(x,y)=("<<x<<","<<y<<")"<<endl;
    cout<<"f1.cnt = "<<*pcnt<<endl;

    return 0;
}

int* f1(int& p, int& q){
    // int& p = ??? main.x
    // int& q = ??? main.y
    int z = p+q;
    cout<<"f1("<<p<<", "<<q<<"):"<<z<<endl;

    p = p+2;
    q = q+5;

    static int cnt = 0;
    ++cnt;
    cout<<"static f1.cnt = "<<cnt<<endl<<endl;

    return &cnt;
}