#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

/*
    Bubble Sort
*/

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

    int run = 0;
    for(bool hasSwap=true;hasSwap;++run){
        hasSwap = false;
        for(int i=0;i<n-1-run;++i){
            if(ary[i] > ary[i+1]){
                swap(ary[i], ary[i+1]);
                hasSwap = true;
            }
        }

        if(!hasSwap){
            break;
        }
    }

    for(int i=0;i<n;++i){
        cout<<setw(4)<<ary[i];
        if(i%10 == 9){
            cout<<endl;
        }
    }

    return 0;
}