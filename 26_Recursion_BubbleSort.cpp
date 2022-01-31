#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void bubbleSort(int* ary, int n);

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

    bubbleSort(ary, n);

    for(int i=0;i<n;++i){
        cout<<setw(4)<<ary[i];
        if(i%10 == 9){
            cout<<endl;
        }
    }
    cout<<endl;

    return 0;
}

void bubbleSort(int* ary, int n){
    if(n == 1){
        return;
    }
    for(int i=0;i<n;++i){
        if(ary[i] > ary[i+1]){
            swap(ary[i], ary[i+1]);
        }
    }
    bubbleSort(ary, n-1);
}