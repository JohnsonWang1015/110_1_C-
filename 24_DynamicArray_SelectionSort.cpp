#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){

    int n;
    cout<<"Please input the size of an array: ";
    cin>>n;

    int* ary = new int[n];

    srand((unsigned int)time(NULL));

    for(int i=0;i<n;++i){
        ary[i] = rand()%(100-1+1) + 1;
        cout<<setw(4)<<ary[i];
        if(i%10 == 9){
            cout<<endl;
        }
    }
    cout<<endl;

    // selection sort
    for(int run=0; run<n-1; ++run){
        int k = run;
        for(int i=run+1; i<n; ++i){
            if(ary[i] < ary[k]){
                k = i;
            }
        }
        swap(ary[run], ary[k]);
    }

    for(int i=0;i<n;++i){
        cout<<setw(4)<<ary[i];
        if(i%10 == 9){
            cout<<endl;
        }
    }
    cout<<endl;

    delete [] ary;

    return 0;
}