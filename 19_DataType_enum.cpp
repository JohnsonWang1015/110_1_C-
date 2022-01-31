#include <iostream>

using namespace std;

enum Direction{
    NORTH, SOUTH, EAST, WEST
};

int main(){

    Direction direction;

    direction = SOUTH;

    cout<<"The wind = "<<direction<<endl;

    switch(direction){
        case NORTH:
            cout<<"North wind"<<endl;
            break;
        case SOUTH:
            cout<<"South wind"<<endl;
            break;
        case EAST:
            cout<<"East wind"<<endl;
            break;
        case WEST:
            cout<<"West wind"<<endl;
            break;
        default:
            cout<<"Error"<<endl;
    }

    return 0;
}