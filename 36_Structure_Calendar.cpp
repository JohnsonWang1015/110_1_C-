#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

struct MonInfo{
    int weekday;
    int monthday;
};

MonInfo getWeekMonthDay(int year, int month);
void showCalendar(int year, int month);
tm getObjTime(int year, int month);

int main(){

    int year;
    cout<<"year = ";
    cin>>year;

    for(int month=1; month<=12; ++month){
        showCalendar(year, month);
    }

    return 0;
}

MonInfo getWeekMonthDay(int year, int month){

    MonInfo ans;
    ans.weekday = -1;
    ans.monthday = -1;

    tm objTime1 = getObjTime(year, month);

    if(mktime(&objTime1) == -1){
        return ans;
    }

    ans.weekday = objTime1.tm_wday;

    if(month == 12){
        ans.monthday = 31;
        return ans;
    }

    tm objTime2 = getObjTime(year, month+1);

    if(mktime(&objTime2) == -1){
        return ans;
    }

    ans.monthday = objTime2.tm_yday - objTime1.tm_yday;

    return ans;
}

void showCalendar(int year, int month){
    MonInfo wmday = getWeekMonthDay(year, month);

    if(wmday.monthday == -1){
        cout<<"year or month error ..."<<endl;
        return;
    }

    int weekday = wmday.weekday; // 當月 1 號星期幾
    int monthday = wmday.monthday;

    string strWeek[7] = {"日", "一", "二", "三", "四", "五", "六"};

    cout<<year<<" 年 "<<month<<" 月 1 日 (星期"<<strWeek[weekday]<<") 共 "<<monthday<<" 天"<<endl<<endl;

    for(int i=0;i<7;++i){
        cout<<setw(4)<<strWeek[i];
    }
    cout<<endl;

    for(int i=0;i<weekday;++i){
        cout<<setw(4)<<"";
    }
    for(int i=1;i<=monthday;++i){
        cout<<setw(4)<<i;
        if((i+weekday - 1)%7 == 6){
            cout<<endl;
        }
    }
    cout<<endl<<endl;
}

tm getObjTime(int year, int month){
    tm objTime;

    objTime.tm_year = year - 1900;
    objTime.tm_mon = month - 1;
    objTime.tm_mday = 1;
    objTime.tm_hour = 0;
    objTime.tm_min = 0;
    objTime.tm_sec = 1;
    objTime.tm_isdst = 0;

    return objTime;
}
