#include <iostream>
#include <iomanip>

using namespace std;

enum Direction {
    RIGHT ,DOWN, LEFT, UP
};

int main() {

    int n=0, m=0;
    cout<<"n, m = ";
    cin>>n>>m;

    int deltaR[4] = {0,1,0,-1};
    int deltaC[4] = {1,0,-1,0};

    int** figure = new int*[n];
    for(int i=0; i<n; ++i) {
        figure[i] = new int[m];
    }

    // initialization
    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
            figure[i][j] = 0;
        }
    }

    Direction dir = RIGHT;
    int r=0,c=0;

    for(int num=1; num<=n*m; ++num) {
        figure[r][c] = num;

        // calculate the next r and c
        int r1, c1;
        r1 = r+deltaR[dir];
        c1 = c+deltaC[dir];
        if(r1>=n || r1<0 || c1>=m || c1<0 || figure[r1][c1]!=0) {
            dir = static_cast<Direction>((dir+1)%4);
            r1 = r+deltaR[dir];
            c1 = c+deltaC[dir];
        }
        r = r1;
        c = c1;
    }

    // show the array figure
    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
            cout<<setw(4)<<figure[i][j];
        }
        cout<<endl;
    }

    for(int i=0; i<n; ++i) {
        delete [] figure[i];
    }
    delete [] figure;

    return 0;
}