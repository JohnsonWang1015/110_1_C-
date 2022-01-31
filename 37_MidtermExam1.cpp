#include <iostream>

using namespace std;

int main(){

    int a1=1, a2=2, a3=3, a4;
    int n;
    cout<<"Please input n (n >= 1) = ";
    cin>>n;

    a4 = (n == 1 ? a1 : (n == 2 ? a2 : a3));

    for(int i=4;i<=n;++i){
        a4 = a1+a2+a3;
        a1 = a2;
        a2 = a3;
        a3 = a4;
    }

    cout<<"a("<<n<<") = "<<a4<<endl;

    return 0;
}