#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void F(int* ary, int L, int R);

int main(){

    const int n = 10;
    int ary[n];

    srand((unsigned)time(NULL));

    for(int i=0;i<n;++i){
        ary[i] = rand()%(99-7+1) + 7;
        cout<<setw(4)<<ary[i];
    }
    cout<<endl<<endl;

    F(ary, 0, n-1);

    for(int i=0;i<n;++i){
        cout<<setw(4)<<ary[i];
    }

    return 0;
}

void F(int* ary, int L, int R){
    if(L>=R){
        return;
    }
    swap(ary[L], ary[R]);
    F(ary, L+1, R-1);
    return;
}