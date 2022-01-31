#include <iostream>
#include <iomanip>

using namespace std;

enum Direction{
    RIGHTUP, RIGHT, LEFTDOWN, DOWN
};

int main(){

    const int n = 5;
    int ary[n][n];

    int deltaR[4] = {-1, 0, 1, 1};
    int deltaC[4] = {1, 1, -1, 0};

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            ary[i][j] = 0;
        }
    }

    Direction dir = RIGHTUP;
    int r=0, c=0;

    for(int num=1;num<=n*n;++num){
        ary[r][c] = num;
        int r1, c1;
        r1 = r + deltaR[dir];
        c1 = c + deltaC[dir];

        if(r1<0 || r1>=n || c1<0 || c1>=n || dir%4==1 || dir%4==3 || ary[r1][c1]!=0){
            if(r1>=n || c1>=n){
                deltaR[1] = 1; // right -> down
                deltaC[1] = 0; // right -> down
                deltaR[3] = 0; // down -> right
                deltaC[3] = 1; // down -> right
            }

            dir = static_cast<Direction>((dir+1)%4);
            r1 = r + deltaR[dir];
            c1 = c + deltaC[dir];
        }

        r = r1;
        c = c1;
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<setw(4)<<ary[i][j];
        }
        cout<<endl;
    }

    return 0;
}