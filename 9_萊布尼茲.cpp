#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double ans = 0;
    cout<<"請輸入總項次：";
    int n;
    cin>>n;

    for(int i=1, j=1; i<=n; i+=2, j=0-j){
        int x = 1+(i-1)*2;
        /*
        if(j > 0){
            cout<<"+1/"<<x;
        }else{
            cout<<"-1/"<<x;
        }*/
        ans += j * 1.0/i;
    }
    cout<<"ans = "<<ans<<endl;

    cout<<"PI = "<<4 * ans<<endl;

    return 0;
}
