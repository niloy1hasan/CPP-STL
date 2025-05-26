#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct task{
    int id;
    int priority;

    task(int id, int priority){
        this->id = id;
        this->priority = priority;
    }
};

struct compare{
    bool operator()(task const &o1, task const &o2){
        return o1.priority < o2.priority;
    }
};

int main(){

    priority_queue<task, vector<task>, compare> taskPriority;

    cout << "priority queue size: " << taskPriority.size() << endl;

    taskPriority.push(task(1, 5));
    taskPriority.push(task(3, 8));
    taskPriority.push(task(2, 4));
    taskPriority.push(task(5,2));
    taskPriority.push(task(4, 1));

    cout << "priority queue size: " << taskPriority.size() << endl;

    cout << "All task based on there priority: ";

    while(!taskPriority.empty()){
        cout << "\nTask id: " << taskPriority.top().id << "\nTask priority: " << taskPriority.top().priority << endl;
        taskPriority.pop();
    }







    return 0;
}