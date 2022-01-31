#include <iostream>

using namespace std;

int main()
{
    int i = 10, j = 20; // 宣告一個 int 變數 i，宣告一個 int 變數 j

    int* pi; // 宣告一個 int 指標變數 pi
    pi = &i; // 將 i 的位址給 pi

    // 給別名
    int& ii = i; // 將 i 給一個別名 ii
    int& i3 = *pi; // 將 *pi (等同於 i) 給一個別名 i3

    // 輸出
    // 值
    cout<<"i = "<<i<<endl;      // 10
    cout<<"ii = "<<ii<<endl;    // 10
    cout<<"i3 = "<<i3<<endl;    // 10
    cout<<"*pi = "<<*pi<<endl;  // 10

    cout<<"------------------------"<<endl;

    // 輸出
    // 址
    cout<<"&i = "<<&i<<endl;            // 0x61fe04
    cout<<"&ii = "<<&ii<<endl;          // 0x61fe04
    cout<<"&i3 = "<<&i3<<endl;          // 0x61fe04
    cout<<"&(*pi) = "<<&(*pi)<<endl;    // 0x61fe04

    cout<<"------------------------"<<endl;

    pi = &j; // 將 j 的位址給 pi
    // 輸出
    cout<<"&j = "<<&j<<endl; // j 的位址                           // 0x61fe00
    cout<<"&(*pi) = "<<&(*pi)<<endl; // *pi(等於 i) 的位址         // 0x61fe00
    cout<<"*pi = "<<*pi<<endl; // *pi 的值                         // 20

    return 0;
}
