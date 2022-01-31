#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<"請輸入總列數：";

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int x = n-i;
        for(int j=1;j<=x;++j){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;

    for(int i=1;i<=n;++i){
        int x = i-1;
        //int x = n-i;

        for(int j=1;j<=x;++j){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;

    // V
    for(int i=1;i<=n;++i){
        int x = i-1;
        for(int j=1;j<=x;++j){
            cout<<" ";
        }
        cout<<"*";

        int y = (n+n-3)+(i-1)*(-2);
        for(int j=1;j<=y;++j){
            cout<<" ";
        }
        if(i != n){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    // N
    for(int i=1;i<=n;++i){
        int x = n-i;
        for(int j=1;j<=x;++j){
            cout<<" ";
        }
        cout<<"*";

        int y = -1 + (i-1)*2;
        for(int j=1;j<=y;++j){
            cout<<" ";
        }
        if(i != 1){
            cout<<"*";
        }

        int z = (n+n-3) + (i-1)*(-2);
        for(int j=1;j<=z;++j){
            cout<<" ";
        }
        if(i != n){
           cout<<"*";
        }

        cout<<endl;
    }
    cout<<endl;

    // W
    for(int i=1;i<=n;++i){
        int x = i-1;
        for(int j=1;j<=x;++j){
            cout<<" ";
        }
        cout<<"*";

        int y = (n+n-3)+(i-1)*(-2);
        for(int j=1;j<=y;++j){
            cout<<" ";
        }
        if(i != n){
            cout<<"*";
        }

        int z = -1 + (i-1)*2;
        for(int j=1;j<=z;++j){
            cout<<" ";
        }
        if(i != 1){
            cout<<"*";
        }

        int w = (n+n-3) + (i-1)*(-2);
        for(int j=1;j<=w;++j){
            cout<<" ";
        }
        if(i != n){
           cout<<"*";
        }

        cout<<endl;
    }
    cout<<endl;

    // M
    for(int i=1;i<=n;++i){
        int x = n-i;
        for(int j=1;j<=x;++j){
            cout<<" ";
        }
        cout<<"*";

        int y = -1 + (i-1)*2;
        for(int j=1;j<=y;++j){
            cout<<" ";
        }
        if(i != 1){
            cout<<"*";
        }

        int z = (n+n-3) + (i-1)*(-2);
        for(int j=1;j<=z;++j){
            cout<<" ";
        }
        if(i != n){
            cout<<"*";
        }

        int w = -1 + (i-1)*2;
        for(int j=1;j<=w;++j){
            cout<<" ";
        }
        if(i != 1){
            cout<<"*";
        }

        cout<<endl;
    }
    cout<<endl;

    return 0;
}
