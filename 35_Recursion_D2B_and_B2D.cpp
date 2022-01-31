#include <iostream>
#include <cmath>

using namespace std;

// D2B(number, k index of n)
string D2B(int n, int k);
int B2D(string s);
int B2D_2(string s);

int main(){

    int n, k;
    cout<<"positive integer = ";
    cin>>n;
    cout<<"how many bits = ";
    cin>>k;

    string s = D2B(n, k);
    cout<<s<<" = "<<B2D(s)<<endl;
    cout<<s<<" = "<<B2D_2(s)<<endl;

    return 0;
}

string D2B(int n, int k){
    char x = (char)((n%2) + '0');
    if(n == 0 || n == 1){
        return string(k-1, '0') + x;
    }
    return D2B(n/2, k-1) + x;
}

// get first char, calculate 1~n char
int B2D(string s){
    int n = s.length();
    if(n == 1){
        return s[0] - '0';
    }
    int lastCharNum = s[n-1] - '0';
    return B2D(s.substr(0, n-1))*2 + lastCharNum;
}

// get last char, calculate 0~(n-1) char
int B2D_2(string s){
    int n = s.length();
    if(n == 1){
        return s[0] - '0';
    }
    int firstNum = pow(2, n-1) * (s[0] - '0');
    return firstNum + B2D(s.substr(1));
}