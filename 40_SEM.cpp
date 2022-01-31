#include <iostream>
#include <bitset>

using namespace std;

union FourBytes{
    float f;
    int i;
};

int main(){

    FourBytes test;

    float f;
    cout<<"Please input a floating number = ";
    cin>>f;

    test.f = f;
    
    bitset<sizeof(float) * CHAR_BIT> bits(test.i);
    cout<<"bit pattern = "<<bits<<endl;

    return 0;
}