#include <iostream>
#include <tuple>
using namespace std;
int main(){
    /*
    pairs work like a variable where can hold two data, but not similar of array, it is close of variable

    syntax:
    pair<first data type, second data type> pairName;

    to access first element, use pairName.first and for second pair.second
    can compare two pairs through == => =< and other comparison operators
    
    unpack pair:
    tie(varible1, variable2) = pairName;
    this is similar result of:  
    variable1 = pairName.first;
    variable2 = pairName.second;
    */

    pair<string, int> user = {"Niloy", 24};
    /*
    other way to initialize:
    pair<firstData type, secondData type> user = make_pair(data1, data2);
    */

    pair<string, int> user2 = {"Niloy", 24};

    cout << "User Name: " << user.first  << "\nAge: " << user.second << endl;

    //compare
    cout << "user1 == user2? " << (user==user2) << endl;

    //update

    user.first = "Nahid";
    cout << "User Name: " << user.first  << "\nAge: " << user.second << endl;
    cout << "user1 == user2? " << (user==user2) << endl;

    //unpacking
    string name;
    int age;

    //tie is part of tuple header
    tie(name, age) = user2;
    cout << "User Name: " << name  << "\nAge: " << age << endl;

    return 0;
}