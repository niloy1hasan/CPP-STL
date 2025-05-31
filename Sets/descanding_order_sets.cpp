#include <iostream>
#include <set>
using namespace std;
int main(){
    /*
    syntax:
    set<data type, greater<data type>> setName;
    */

    set<int, greater<int>> number = {38,23, 9, 17, 32,41,16,18, 49, 82, 74, 42, 16, 62, 3, 53, 112, 6, 33, 23, 12};

    for(int i:number){
        cout << i << "  ";
    }

    return 0;
}