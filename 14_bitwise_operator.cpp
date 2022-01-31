#include <iostream>

using namespace std;

/*
    logical operator(邏輯運算子): &&, ||, !
    bitwise operator(逐位元運算子): &, |, ~
*/
int main()
{
    cout<<(0 && 1)<<endl;
    cout<<(0 || 1)<<endl;

    cout<<(0 & 1)<<endl;
    cout<<(0 | 1)<<endl;

    cout<<(1 & 2)<<endl;
    cout<<(1 | 2)<<endl;

    cout<<(7 & 8)<<endl;
    cout<<(7 | 8)<<endl;

    cout<<(~1)<<endl;

    cout<<(8 << 1)<<endl;
    cout<<(8 >> 1)<<endl;

    return 0;
}
