#include <iostream>

using namespace std;

int main()
{
    int i = 10;
    int j = 20;

    cout<<"i 的 address："<<&i<<endl;
    cout<<"i 的 value："<<i<<endl;
    cout<<"i 的 byte："<<sizeof(i)<<endl;
    cout<<"int 的 byte："<<sizeof(int)<<endl;

    cout<<"j 的 address："<<&j<<endl;
    cout<<"j 的 value："<<j<<endl;
    cout<<"j 的 byte："<<sizeof(j)<<endl;
    cout<<"int 的 byte："<<sizeof(int)<<endl;

    cout<<"----------------------------------------"<<endl;

    double d = 3.14;
    float f = 1.23;

    cout<<"d 的 address："<<&d<<endl;
    cout<<"d 的 value："<<d<<endl;
    cout<<"d 分配的 byte 數："<<sizeof(d)<<endl;
    cout<<"double 代表的 byte 數："<<sizeof(double)<<endl;

    cout<<"----------------------------------------"<<endl;

    cout<<"f 的 address："<<&f<<endl;
    cout<<"f 的 value："<<f<<endl;
    cout<<"f 分配的 byte 數："<<sizeof(f)<<endl;
    cout<<"float 代表的 byte 數："<<sizeof(float)<<endl;

    cout<<"----------------------------------------"<<endl;

    bool flag1 = true;

    cout<<"flag1 的 address："<<&flag1<<endl;
    cout<<"flag1 的 value："<<flag1<<endl;
    cout<<"flag1 分配的 byte 數："<<sizeof(flag1)<<endl;
    cout<<"bool 代表的 byte 數："<<sizeof(bool)<<endl;

    cout<<"----------------------------------------"<<endl;

    char c = 'A';

    //cout<<"c address："<<static_cast<void*>(&c)<<endl;
    cout<<"c address："<<(bool*)(&c)<<endl;
    //cout<<"c 的 address："<<&c<<endl;
    cout<<"c value："<<c<<endl;
    cout<<"c byte："<<sizeof(c)<<endl;
    cout<<"char byte："<<sizeof(char)<<endl;

    cout<<"c："<<c<<endl;
    cout<<"c+0："<<c+0<<endl;
    cout<<"c+1："<<c+1<<endl;
    cout<<"(char)(c+1)："<<(char)(c+1)<<endl;

    cout<<"----------------------------------------"<<endl;
    d = d + 1;
    cout<<"d=d+1，d："<<d<<endl;
    cout<<"i+d："<<i+d<<endl;

    i = i + d;
    cout<<"i=i+d，i："<<i<<endl;

    cout<<"----------------------------------------"<<endl;

    cout<<"true："<<true<<endl;
    cout<<"false："<<false<<endl;

    // bool --> numeric
    // false -> 0，true -> 1

    // numeric --> bool
    // 0 -> false
    // 非 0 -> true：1.2, 3, -500, -3.4

    cout<<"!(1.2)："<<!(1.2)<<endl;
    cout<<"!(0)："<<!(0)<<endl;
    cout<<"1.2 && 20："<<(1.2 && 20)<<endl;
    cout<<"1.2 && 0："<<(1.2 && 0)<<endl;
    cout<<"1.2 || 0："<<(1.2 || 0)<<endl;

    return 0;
}
