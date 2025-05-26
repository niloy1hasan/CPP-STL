#include <iostream>
#include <queue>
using namespace std;
int main(){
    /*
    explanation:
    A priority queue is a type of queue where each element has a priority.
    The element with highest priority is dequeued first.

    *by default STL priority queue gives the largest element the highest priority 

    syntax:
    priority_queue<data type> priorityQueue_Name;

    operations:
    push() : add element at the end
    pop()  : removes the element with the highest priority
    top()  : get the element with the highest priority
    empty(): check priority queue is empty
    size() : get the size of priority queue
    */

    priority_queue<int> numbers;

    cout << "priority queue's size: " << numbers.size() << endl;

    numbers.push(5);  //for normal queue, it will be front
    numbers.push(10);
    numbers.push(3);
    numbers.push(15); //but for priority queue, it is the front element
    numbers.push(4);
    numbers.push(13); //for normal queue, it will be last element

    cout << "priority queue's size: " << numbers.size() << endl;

    cout << "highest priority of the queue: " << numbers.top() << endl;

    cout << "All number based on there priority: ";
    while(!numbers.empty()){
        cout << numbers.top() << " ";
        numbers.pop();
    }
    
    return 0;
}