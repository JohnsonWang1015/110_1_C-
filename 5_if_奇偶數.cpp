#include <iostream>

using namespace std;

int main()
{
    int age = 0;
    cout<<"�п�J�z���~��:";
    cin>>age;

    if(age <= 0){
        cout<<"�~�ֿ�J���~!!"<<endl;
        return 1;
    }

    if(age%2 == 0){
        cout<<age<<" �O����"<<endl;
    }else{
        cout<<age<<" �O�_��"<<endl;
    }

    if(age >= 20){
        cout<<"�z�O���~�H"<<endl;
    }else{
        cout<<"�z�O�����~�H"<<endl;
    }

    return 0;
}
