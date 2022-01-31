#include <iostream>

using namespace std;

union FourByte{
    float f; // 4 bytes
    int i; // 4 bytes
    unsigned u; // 4 bytes
};

int main(){

    FourByte test;
    test.f = -3;

    cout<<"test.f = "<<test.f<<endl;
    cout<<"test.i = "<<test.i<<endl;
    cout<<"test.u = "<<test.u<<endl;

    unsigned guard = 1;
    string s = "";
    for(int i=0;i<sizeof(test.i)*8;++i){
        s = ((test.i & guard) == 0 ? '0' : '1') + s;
        guard = (guard << 1);
    }
    cout<<"bit pattern : "<<s<<endl; // IEEE pattern

    return 0;
}