#include <iostream>

using namespace std;

int f1(int x, int y);
int f2(int x, int y);
int f3(int x, int y);

int main(){

    int x=3, y=4;
    int z = f1(x+2, y*3); // f1(5, 12)
    cout<<"z in main: "<<z<<endl; // 1311

    return 0;
}

int f1(int x, int y){
    // int x = ??? 5
    // int y = ??? 12
    int z = x+y; // z = 5+12 = 17
    int p = f2(z, y+2); // f2(17, 14) = 1311
    return p; // 1311
}

int f2(int x, int y){
    // int x = ??? 17 
    // int y = ??? 14
    int z = x*y; // z = 17*14 = 238
    int p = f3(x, y*2); // f3(17, 28) = 1073
    return p+z; // 1073 + 238 = 1311
}

int f3(int x, int y){
    // int x = ??? 17
    // int y = ??? 28
    int z = x*x + y*y; // z = 17*17 + 28*28 = 289 + 784 = 1073
    return z; // 1073
}