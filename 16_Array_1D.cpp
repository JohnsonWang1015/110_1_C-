#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

/*
    reverse array
*/

void showArray(int* ary, int n);

int main(){

    const int n = 20;
    int ary[n];

    srand((unsigned)time(NULL));

    for(int i=0;i<n;++i){
        ary[i] = rand()%(100-1+1) + 1;
        cout<<setw(4)<<ary[i];
        if(i%10 == 9){
            cout<<endl;
        }
    }
    cout<<endl;

    /*for(int i=0, j=n-1; i<n, i<j ; ++i, --j){
        swap(ary[i], ary[j]);
    }*/

    for(int i=0, j=n-1; i<j; ++i, --j){
        swap(ary[i], ary[j]);
    }

    /*for(int i=0;i<n;++i){
        cout<<setw(4)<<ary[i];
        if(i%10==9){
            cout<<endl;
        }
    }
    cout<<endl;*/

    showArray(ary, n);

    return 0;
}

void showArray(int* ary, int n) {
    for(int i=0;i<n;++i){
        cout<<setw(4)<<ary[i];
        if(i%10 == 9){
            cout<<endl;
        }
    }
    cout<<endl;
}