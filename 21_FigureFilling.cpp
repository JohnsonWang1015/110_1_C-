#include <iostream>
#include <iomanip>

using namespace std;

enum Direction{
    RIGHT, DOWN, LEFT, UP
};

int main(){

    const int n = 5;
    int figure[n][n];

    // initialization
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            figure[i][j] = 0;
        }
    }

    Direction dir = RIGHT;
    int r=0, c=0;

    for(int num=1;num<=n*n;++num){
        figure[r][c] = num;

        // calculate the next r and c
        int r1, c1;
        if(dir == RIGHT){
            r1 = r;
            c1 = c+1;
            if(c1 >= n || figure[r1][c1] != 0){
                dir = DOWN;
                r1 = r+1;
                c1 = c;
            }
            r = r1;
            c = c1;
            continue;
        }

        if(dir == DOWN){
            r1 = r+1;
            c1 = c;
            if(r1 >= n || figure[r1][c1] != 0){
                dir = LEFT;
                r1 = r;
                c1 = c-1;
            }
            r = r1;
            c = c1;
            continue;
        }

        if(dir == LEFT){
            r1 = r;
            c1 = c-1;
            if(c1 < 0 || figure[r1][c1] != 0){
                dir = UP;
                r1 = r-1;
                c1 = c;
            }
            r = r1;
            c = c1;
            continue;
        }

        if(dir == UP){
            r1 = r-1;
            c1 = c;
            if(r1 < 0 || figure[r1][c1] != 0){
                dir = RIGHT;
                r1 = r;
                c1 = c+1;
            }
            r = r1;
            c = c1;
            continue;
        }
    }

    // print the array
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<setw(4)<<figure[i][j];
        }
        cout<<endl;
    }

    return 0;
}