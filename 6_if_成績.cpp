#include <iostream>
//#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

int main()
{
    int score = 0;
    char level;

    cout<<"請輸入您的成績:";
    //IOS;
    cin>>score;

    if(score<0 || score>100){
        cout<<"成績輸入錯誤!!"<<endl;
        return 1;
    }else{
        if(score>=60){

            cout<<"及格"<<endl;

            if(score>=80)
                level = 'A';
            else
                level = 'B';

            cout<<"等級:"<<level<<endl;

        }else
            cout<<"不及格"<<endl;
    }
    return 0;
}
