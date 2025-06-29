#include <iostream>
#include <set>
using namespace std;

void showSet(multiset<int> data){
for(int i:data){
        cout << i << " ";
    }
    cout << "\n\n";
}

int main(){
    /*
    syntax:
    multiset<data type> multiset_name;
    - can store same values for multiple times
    - by default values are stored as ascending order

    multiset method:
    .insert()
    .size()
    .empty()
    .find()
    .count()
    .erase()
    */

    multiset<int> data = {4, 9, 12, 8, 4, 8, 1, 5};
    /*
    descandiing order
    multiset<int, greater<int>> data = {...};
    */
    showSet(data);

    data.insert(15);
    data.insert(11);
    data.insert({13, 21, 9});

    cout << "Now data size is: " << data.size() << "\n\n";
    showSet(data);

    data.erase(4); // all 4 will be remove
    showSet(data);


    


    return 0;
}