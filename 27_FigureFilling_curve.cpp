#include <iostream>
#include <iomanip>

using namespace std;

enum Direction{
    DOWN, RIGHT, UP
};

int main(){

    const int n = 5;
    int ary[n][n];

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            ary[i][j] = 0;
        }
    }

    Direction dir = DOWN;
    int r=0, c=0;

    for(int num=1;num<=n*n;++num){
        ary[r][c] = num;

        int r1, c1;
        if(dir == DOWN){
            r1 = r+1;
            c1 = c;
            if(r1>=n || ary[r1][c1]!=0){
                dir = RIGHT;
                r1 = r;
                c1 = c+1;
                dir = UP;
            }
            r = r1;
            c = c1;
            continue;
        }
        if(dir == UP){
            r1 = r-1;
            c1 = c;
            if(r1<0 || ary[r1][c1]!=0){
                dir = RIGHT;
                r1 = r;
                c1 = c+1;
                dir = DOWN;
            }
            r = r1;
            c = c1;
            continue;
        }
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<setw(4)<<ary[i][j];
        }
        cout<<endl;
    }

    return 0;
}