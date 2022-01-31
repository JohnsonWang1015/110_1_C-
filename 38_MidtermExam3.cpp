#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand((unsigned)time(NULL));

    int a1, a2, a3, max=24, min=7;
    a1 = rand() % (max-min+1) + min;

    for(;true;){
        int x = rand() % (max-min+1) + min;
        if(a1 == x){
            continue;
        }
        a2 = x;
        break;
    }

    for(;true;){
        int x = rand() % (max-min+1) + min;
        if(a1 == x || a2 == x){
            continue;
        }
        a3 = x;
        break;
    }

    cout<<a1<<" "<<a2<<" "<<a3<<endl;

    int a[3] = {a1, a2, a3};
    int run = 0;
    for(bool hasSwap=true;hasSwap;++run){
        hasSwap = false;
        for(int i=0;i<3-1-run;++i){
            if(a[i] > a[i+1]){
                swap(a[i], a[i+1]);
                hasSwap = true;
            }
        }

        if(!hasSwap){
            break;
        }
    }

    for(int i=0;i<3;++i){
        cout<<a[i]<<" ";
    }

    return 0;
}