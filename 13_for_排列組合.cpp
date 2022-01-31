#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //int s[] = {'A', 'B', 'C', 'D', 'E'};

    for(int i=0; i<pow(2, 5); ++i) {

        string s1 = "";
        unsigned int guard = 1;

        cout<<"{";
        for(int j=0; j<5; ++j) {
            if((i & guard) == 0) {
                s1 = '0' + s1;
            } else {
                s1 = '1' + s1;
                cout<<(char)('A' + j);
            }

            guard = (guard << 1);
        }
        cout<<"}";
        cout<<endl;
    }

    return 0;
}
