#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

/*
    Binary Search
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

    // Bubble sort
    int run = 0; // round
    for(bool hasSwap=true;hasSwap;++run){
        hasSwap = false;
        for(int i=0;i<n-1-run;++i){
            if(ary[i] > ary[i+1]){
                swap(ary[i], ary[i+1]);
                hasSwap = true;
            }
        }

        if(!hasSwap){ // if it does not swap, then break the loop
            break;
        }
    }

    // print
    for(int i=0;i<n;++i){
        cout<<setw(4)<<ary[i];
        if(i%10 == 9){
            cout<<endl;
        }
    }
    cout<<endl;

    int key;
    cout<<"Please input a key: ";
    cin>>key;

    // binary search
    int x = -1;

    for(int l=0, r=n-1, m;l<=r;){
        m = (l+r)/2;

        if(ary[m] == key){
            x = m;
            break;
        }
        if(key < ary[m]){
            r = m-1;
        }else{
            l = m+1;
        }
    }

    if(x == -1){
        cout<<key<<" can not be found."<<endl;
    }else{
        cout<<"ary["<<x<<"] = "<<key<<endl;
    }

    return 0;
}