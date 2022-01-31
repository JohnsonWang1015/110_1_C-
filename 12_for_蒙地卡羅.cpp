#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
#include <cmath>
#include <iomanip>

#define IOS ios::sync_with_stdio(0),cout.tie(0),cin.tie(0)

using namespace std;

int main()
{
    IOS;
    // 蒙地卡羅
    srand(time(NULL));

    int sum = 0; // 圓內有 sum 個飛鏢 (c)
    int n = 5000000; // 投 n 個飛鏢 (n)

    for(int i=1; i<=n ; ++i){

        long double x = (long double)rand() / RAND_MAX; // x 亂數
        long double y = (long double)rand() / RAND_MAX; // y 亂數
        if(pow(x,2) + pow(y,2) < 1){ // x^2 + y^2 < 1 --> 在圓內
            ++sum;
        }

    }
    cout<<setprecision(30)<<"PI = "<< 4.0 * sum / n <<endl<<endl; // pi = 4 * c / n

    // 萊布尼茲
    long double s = 1.0L;
    long double ans;

    for(int i=1; i<=n ;++i){
        ans = 1.0L / (2 * i + 1);
        if(i % 2 != 0){
            ans = 0 - ans;
        }
        s += ans;
    }
    cout<<"PI = "<< 4*s <<endl;

    return 0;
}
