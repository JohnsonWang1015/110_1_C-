#include <iostream>
//#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main()
{
    int score = 0;
    char level;

    cout<<"�п�J�z�����Z:";
    //IOS;
    cin>>score;

    if(score<0 || score>100){
        cout<<"���Z��J���~!!"<<endl;
        return 1;
    }else{
        if(score>=60){

            cout<<"�ή�"<<endl;

            if(score>=80)
                level = 'A';
            else
                level = 'B';

            cout<<"����:"<<level<<endl;

        }else
            cout<<"���ή�"<<endl;
    }
    return 0;
}
