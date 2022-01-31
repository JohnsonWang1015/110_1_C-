#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int binarySearch(int* ary, int L, int R, int key);
int* bubbleSort(int* ary, int n);
void showArray(int* ary, int n);

int main(){

    const int n = 20;
    int* ary = new int[n];

    srand((unsigned)time(NULL));

    for(int i=0;i<n;++i){
        ary[i] = rand()%(100-1+1) + 1;
        cout<<setw(4)<<ary[i];
        if(i%10 == 9){
            cout<<endl;
        }
    }
    cout<<endl;

    ary = bubbleSort(ary, n);

    showArray(ary, n);

    int key;
    cout<<"Please input a key = ";
    cin>>key;

    int x = binarySearch(ary, 0, n-1, key);

    cout<<key<<" is in the index = "<<x<<endl;

    delete [] ary;

    return 0;
}

int binarySearch(int* ary, int L, int R, int key){
    
    if(L <= R){
        int m = (L+R)/2;

        if(ary[m] == key){
            return m;
        }else if(ary[m] > key){
            return binarySearch(ary, L, m-1, key);
        }

        return binarySearch(ary, m+1, R, key);
    }

    return -1;
    
}

int* bubbleSort(int* ary, int n){
    int run = 0;
    for(bool hasSwap=true;true;++run){
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
    return ary;
}

void showArray(int* ary, int n){
    for(int i=0;i<n;++i){
        cout<<setw(4)<<ary[i];
        if(i%10 == 9){
            cout<<endl;
        }
    }
}