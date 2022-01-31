#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int minIndex(int* ary, int L, int R);

// selectionSort(array, total size, index)
void selectionSort(int* ary, int n, int index=0){
    if(index == n){
        return;
    }
    int k = minIndex(ary, index, n-1); // minimum element index

    if(k != index){
        swap(ary[k], ary[index]);
    }
    selectionSort(ary, n, index+1);
}

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

    selectionSort(ary, n);

    for(int i=0;i<n;++i){
        cout<<setw(4)<<ary[i];
        if(i%10 == 9){
            cout<<endl;
        }
    }
    cout<<endl;

    return 0;
}

int minIndex(int* ary, int L, int R){
    if(L == R){
        return L;
    }

    int min = minIndex(ary, L+1, R);

    if(ary[min] > ary[L]){
        min = L;
    }
    return min;
}