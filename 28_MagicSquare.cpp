#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    const int n = 3;
    int mgAry[n][n];

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            mgAry[i][j] = 0;
        }
    }

    int r=0, c=n/2;

    for(int num=1;num<=n*n;++num){
        mgAry[r][c] = num;

        int r1 = r-1;
        if(r1<0){
            r1 = n-1;
        }

        int c1 = c-1;
        if(c1<0){
            c1 = n-1;
        }

        if(mgAry[r1][c1] != 0){
            c1 = c; // column does not move
            r1 = r+1; // row adds one
        }

        r = r1;
        c = c1;
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<setw(4)<<mgAry[i][j];
        }
        cout<<endl;
    }

    return 0;
}