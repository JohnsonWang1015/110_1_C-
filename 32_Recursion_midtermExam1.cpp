#include <iostream>
#include <iomanip>

using namespace std;

int F(int n);

int main(){

    const int n = 10;
    for(int i=1;i<=n;++i){
        cout<<"F("<<setw(2)<<i<<")="<<setw(4)<<F(i)<<endl;
    }

    return 0;
}

int F(int n){
    if(n <= 3){
        return n;
    }
    return F(n-1) + F(n-2) + F(n-3);
}