#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int n=0, count=0;
    cout<<"Please key in a number:";
    cin>>n;

    // No. 2
    for(int i=sizeof(n)*8-1; i>=0; --i){
        cout<<(n>>i & 1);
        /*int k = n >> i;
        if((k & 1) == 1){
            cout<<"1";
        }else{
            cout<<"0";
        }*/
    }
    cout<<endl;

    // No. 1
    string s = "";
    for(int i=1;i<=sizeof(n)*8;++i){
        if(n % 2 == 0){
            s = "0" + s;
        }else{
            s = "1" + s;
        }
        n = n / 2;
    }
    cout<<s<<endl;

    return 0;
}
