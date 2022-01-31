#include <iostream>

using namespace std;

/*
Expression
*/

int main()
{
    // Numeric expression
    // 1. A op B, A or B is floating, then answer is floating.
    int i = 10, j = 20;
    float f = 2.13;
    double d = 3.14;

    cout<<sizeof(i + f)<<endl;
    cout<<i+f<<endl;

    cout<<sizeof(i + d)<<endl;
    cout<<i+d<<endl;

    // A, B 都是實數，答案是 sizeof 較大者
    cout<<sizeof(f + d)<<endl;
    cout<<f+d<<endl;

    // logicm numeric: true -> 1，false -> 0
    cout<<true+i<<endl;

    // logical operator: &&, ||, !
    // numeric: 0 -> false，non-zero -> true
    cout<<(true && false)<<endl;
    cout<<(true && 23)<<endl;
    cout<<(!true)<<endl;

    // char: 1. ASCII, 2. signed int (1 byte)
    char c = 'A';
    cout<<c<<endl;
    cout<<c + 0<<endl; // 65, 0x41
    cout<<'a' + 0<<endl; // 97, 0x61
    cout<<'0' + 0<<endl; // 48, 0x30

    cout<<(char)(c+3)<<endl; // 'D'

    // 6 comparators: ==, !=, >, >=, <, <=，答案 true | false
    cout<<('0' == 0)<<endl;

    cout<<"ABCD"<<endl; // C-string: 'A''B''C''D''\0'
    cout<<("B12" < "B1A")<<endl;
    cout<<("B123" < "B12")<<endl;

    return 0;
}
