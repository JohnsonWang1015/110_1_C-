#include <iostream>

using namespace std;

int main()
{
    int age = 0;
    cout<<"請輸入您的年齡:";
    cin>>age;

    if(age <= 0){
        cout<<"年齡輸入錯誤!!"<<endl;
        return 1;
    }

    if(age%2 == 0){
        cout<<age<<" 是偶數"<<endl;
    }else{
        cout<<age<<" 是奇數"<<endl;
    }

    if(age >= 20){
        cout<<"您是成年人"<<endl;
    }else{
        cout<<"您是未成年人"<<endl;
    }

    return 0;
}
