#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL)); // seconds from 1970/1/1-00:00:00
    cout<<"RAND_MAX:"<<RAND_MAX<<endl;
    cout<<time(NULL)<<endl;

    // a <= x && b >= x
    // 3 <= x && 12 >= x --> 0 <= y && 9 >= y -->
    int min = 1, max = 6;
    for(int i=0;i<20;i++){
        cout<<setw(5)<<(rand()%(max-min+1) + min);
        if(i % 10 == 9){
            cout<<endl;
        }
    }

    return 0;
}
