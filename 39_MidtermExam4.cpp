#include <iostream>

using namespace std;

string decimalToBinary(int num);
string decimalToBinary_2(int num);

int main(){

    int num;
    cout<<"Please input an integer = ";
    cin>>num;

    cout<<num<<" = "<<decimalToBinary(num)<<endl;
    cout<<num<<" = "<<decimalToBinary_2(num)<<endl;

    return 0;
}

string decimalToBinary(int num){
    unsigned q, r=0, cnt=0, k=2;
    q = (num>=0 ? num : ~(-1*num)+1);

    string s1;
    for(;q!=0;++cnt){
        r = q%k;
        q = q/k;
        s1 = (char)(r+'0') + s1;
    }

    for(;cnt<32;++cnt){
        s1 = '0' + s1;
    }

    return s1;
}

string decimalToBinary_2(int num){
    unsigned guard = 1;
    string s1;

    for(int i=0;i<sizeof(int)*8;++i){
        if((num & guard) == 0){
            s1 = '0' + s1;
        }else{
            s1 = '1' + s1;
        }
        guard = (guard << 1);
    }

    return s1;
}