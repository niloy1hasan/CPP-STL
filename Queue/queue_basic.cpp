#include <iostream>
#include <queue>
using namespace std;

int main(){
    /*
    syntax:
    queue<data type> queueName;
    
    basic operation:
    push() : add data at the end
    pop()  : remove data from the front
    front(): get the first value of queue
    back() : get the last value of queue
    size() : get the size of queue
    empty(): check if the queue is empty

    *remainder:
    can't direct initialize like vector, must be push() elements
    */

    queue<string> cityName;
    
    cout << "queue size now : " << cityName.size()<< endl;

    cityName.push("Dhaka");
    cityName.push("Gazipur");
    cityName.push("Chittagong");
    cityName.push("Sylhet");

    cout << "queue size now : " << cityName.size()<< endl;

    cout << "first city: " << cityName.front() << endl;
    cout << "last city: " << cityName.back() << endl;

    cout << "All city: \n";

    while(!cityName.empty()){
        cout << cityName.front() << " ";
        cityName.pop();
    }

    return 0;
}