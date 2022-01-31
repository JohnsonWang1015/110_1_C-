#include <iostream>
#include <iomanip>

using namespace std;

void H(int n, char A, char B, char C);

int cnt = 0;

int main(){

    int n;
    cout<<"how many dishes = ";
    cin>>n;

    H(n, 'A', 'B', 'C');

    cout<<"Total "<<cnt<<" steps"<<endl;

    return 0;
}

void H(int n, char A, char B, char C){
    /* 
        Suppose there are n of dishes, n-1 of dishes move from A to B, 
        then the largest dish moves from A to C, 
        then n-1 of dishes move from B to C
    */
    if(n == 1){
        cout<<setw(2)<<n<<" : "<<A<<"->"<<C<<endl;
        ++cnt;
        return;
    }
    H(n-1, A, C, B); // from A to B
    cout<<setw(2)<<n<<" : "<<A<<"->"<<C<<endl;
    ++cnt;

    H(n-1, B, A, C); // from B to C
    return;
}