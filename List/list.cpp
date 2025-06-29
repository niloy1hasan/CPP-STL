#include <iostream>
#include <list>
using namespace std;

void showList(list<int> data){
    for(int i:data){
        cout << i << "  ";
    }
    cout << "\n\n";
}

int main(){
    /*
    STL List is linkedList data structure template
    here every node has three data, previousNode, nextNode and currentNode Data
    that means, List is doubly linked list

    syntax:
    list<data type> listName;
        - direct initialization is valid
    
    functions:

    .front() - first element of list
    .back()  - last element of list

    .push_back(value) - add data to the end of list
    .push_front(value) - add data to the front of list

    .pop_back() - remove last element
    .pop_front() - remove first element

    .reverse()
    .sort()
    .unique()
    .empty()
    .size()
    .clear()
    .merge()

    */

    list<int> data = {15, 8, 18, 5, 12, 9, 17, 15, 5, 22, 8};

    showList(data);

    data.push_back(22);
    data.push_front(3);
    data.push_front(32);

    showList(data);

    cout << "first element: " << data.front() << "\nlast element: " << data.back() << endl;

    data.pop_back();
    data.pop_front();
    showList(data);

    data.reverse();

    showList(data);

    data.sort();
    showList(data);

    data.unique();
    showList(data);



    return 0;
}