#include <iostream>
#include <stack>
using namespace std;

#define nl "\n"

int main(){

    /*
    syntax:
    stack<data type> stackName;


    remainder:
    stack<string> carName = {"BMW", "Tesla", "Toyota", "Hundai", "Ferrari"};
    vector style initialization is invalid for stack
    must need to push element
    */

    stack<string> carName;
    carName.push("BMW"); //bottom
    carName.push("Tesla");
    carName.push("Toyota");
    carName.push("Hundai");
    carName.push("Ferrari");
    carName.push("Audi");
    carName.push("Rolls Royce"); //top

    cout << carName.top() << nl;

    //stack size
    cout << carName.size() << nl;
    carName.push("Mercedes"); // now it is the top of stack

    cout << carName.top() << nl;

    //access all elements
    cout << "\nAll elements of stack: \n";
    while(!carName.empty()){
        cout << carName.top() << nl;
        carName.pop();
    }

    return 0;
}