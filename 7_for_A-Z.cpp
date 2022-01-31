#include <iostream>

using namespace std;

/* 用 for 結構，用螢幕表示 A~Z */

int main()
{

    for(int i=0;i<26;i=i+1){
        cout<<(char)('A'+i);
    }
    cout<<endl;


    char c = 'A';
    for(int i=0;i<26;++i){
        c = 'A' + i;
        cout<<c<<endl;
    }
    cout<<endl;


    char e = 'A';
    for(;e<='Z';e+=1){
        cout<<e;
    }
    cout<<endl;

    cout<<"---------------------------"<<endl;
    char f = 64;
    for(;f<'Z';) cout<<(++f);

    return 0;
}
