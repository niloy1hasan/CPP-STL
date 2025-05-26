#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    /*
    explanation: min heap priority queue is arranges elements in ascanding order,
    that means first out low priority elements, smallest element gets the highest priority

    syntax:
    priority_queue<data type, vector<data type>, greater<data type>> priorityQueueName;
    */

    priority_queue<int, vector<int>, greater<int>> numbers;

    cout << "priority queue size: " << numbers.size() << endl;

    numbers.push(15);
    numbers.push(8);
    numbers.push(3); // this will get the top priority
    numbers.push(17);
    numbers.push(7);
    numbers.push(18);

    cout << "priority queue size: " << numbers.size() << endl;

    cout << "top priority: " << numbers.top() << endl;

    cout << "All elements of queue: ";
    while(!numbers.empty()){
        cout << numbers.top() << " ";
        numbers.pop();
    }
    return 0;
}