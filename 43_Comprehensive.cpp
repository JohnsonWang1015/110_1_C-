#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int* generateArray(int n);
void showArray(int* ary, int n);
int* bubbleSort(int* ary, int n);
int binarySearch(int* ary, int L, int R, int key);
int getMinIndex(int* ary, int L, int R);
void reverseArray(int* ary, int L, int R);
void selectionSort_for(int* ary, int n);
int getMaxIndex(int* ary, int L, int R);

void selectionSort(int* ary, int n, int index=0){
    if(index == n){
        return;
    }

    int k = getMinIndex(ary, index, n-1);

    if(k != index){
        swap(ary[k], ary[index]);
    }

    selectionSort(ary, n, index+1);
}

int main(){

    int input, n;
    cout<<"Please choose an option: 1) Bubble sort 2) Binary search 3) Selection sort 4) Reverse array 5) Selection sort for loop 6) Get max value: ";
    cin>>input;
    cout<<"Please input the size of an array: ";
    cin>>n;

    int* ary;
    int x = -1;
    int max = 0;

    switch(input){
        case 1:
            ary = generateArray(n);
            cout<<"Original:"<<endl;
            showArray(ary, n);
            cout<<"Bubble sort:"<<endl;
            ary = bubbleSort(ary, n);
            showArray(ary, n);
            break;
        case 2:
            ary = generateArray(n);
            cout<<"The array:"<<endl;
            showArray(ary, n);

            ary = bubbleSort(ary, n);
            cout<<"Bubble sort:"<<endl;
            showArray(ary, n);

            int key;
            cout<<"Please input a key: ";
            cin>>key;
            x = binarySearch(ary, 0, n-1, key);

            if(x == -1){
                cout<<"Not Found"<<endl;
            }else{
                cout<<"The "<<key<<" is in the index "<<x<<endl;
            }
            break;
        case 3:
            ary = generateArray(n);
            cout<<"Original:"<<endl;
            showArray(ary, n);

            cout<<"Selection sort:"<<endl;
            selectionSort(ary, n);
            showArray(ary, n);
            break;
        case 4:
            ary = generateArray(n);
            cout<<"Original:"<<endl;
            showArray(ary, n);

            cout<<"Reverse array:"<<endl;
            reverseArray(ary, 0, n-1);
            showArray(ary, n);
            break;
        case 5:
            ary = generateArray(n);
            cout<<"Original:"<<endl;
            showArray(ary, n);

            cout<<"Selection sort for loop:"<<endl;
            selectionSort_for(ary, n);
            break;
        case 6:
            ary = generateArray(n);
            cout<<"Original:"<<endl;
            showArray(ary, n);

            max = getMaxIndex(ary, 0, n-1);
            cout<<"The max index: "<<max<<" is "<<ary[max]<<endl;
            cout<<"*(ary+"<<max<<")="<<*(ary + max)<<endl;
            break;
        default:
            cout<<"Error ...";
            break;
    }

    delete [] ary;

    return 0;
}

int* generateArray(int n){

    int* ary = new int[n];

    srand((unsigned int)time(NULL));

    for(int i=0;i<n;++i){
        ary[i] = rand()%(100-1+1) + 1;
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
    cout<<endl;
}

int* bubbleSort(int* ary, int n){
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

    return ary;
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

int getMinIndex(int* ary, int L, int R){
    if(L == R){
        return L;
    }

    int min = getMinIndex(ary, L+1, R);

    if(ary[min] > ary[L]){
        min = L;
    }

    return min;
}

void reverseArray(int* ary, int L, int R){
    if(L >= R){
        return;
    }
    swap(ary[L], ary[R]);

    reverseArray(ary, L+1, R-1);
    return;
}

void selectionSort_for(int* ary, int n){
    for(int run=0;run<n-1;++run){
        int k = run;
        for(int i=run+1;i<n;++i){
            if(ary[k] > ary[i]){
                k = i;
            }
        }
        swap(ary[run], ary[k]);
    }

    showArray(ary, n);
}

int getMaxIndex(int* ary, int L, int R){
    if(L == R){
        return L;
    }

    int max = getMaxIndex(ary, L+1, R);

    if(ary[L] > ary[max]){
        max = L;
    }

    return max;
}