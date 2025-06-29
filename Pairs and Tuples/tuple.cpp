#include <iostream>
#include <tuple>
using namespace std;

int main(){
    /*
    tuple is a variable that can hold multiple different types of data

    syntax:
    tuple<data type, data type, data type> tupleName;

    initialization:
    make_tuple(value, value, value);

    access:
    get<data position>(tupleName);

    tuple size:
    tuple_size<decltype(tupleName)>::value;

    swap:
    tuple1.swap(tuple2);

    unpack:
    tie(variable1, variable2, ... , variable_n) =  tupleName;


    */

    tuple<int, float, string> data = make_tuple(5, 83.23, "abc");

    cout << "int data: " << get<0>(data) << endl;
    cout << "float data: " << get<1>(data) << endl;
    cout << "string data: " << get<2>(data) << endl;

    cout << "size of data tuple: " << tuple_size<decltype(data)>::value << endl;

    tuple<int, float, string> data2 = make_tuple(9, 3.24, "bcd");

    data.swap(data2);
    cout << "\n\n";
    cout << "int data: " << get<0>(data) << endl;
    cout << "float data: " << get<1>(data) << endl;
    cout << "string data: " << get<2>(data) << endl;

    //unpacking
    int intData;
    float floatData;
    string stringData;

    tie(intData, floatData, stringData) = data2;
    cout << "\n\n";
    cout << "int data: " << get<0>(data2) << endl;
    cout << "float data: " << get<1>(data2) << endl;
    cout << "string data: " << get<2>(data2) << endl;


    //concat

    auto data3 = tuple_cat(data, data2);
    cout << "\n\n";
    cout << get<0>(data3) << "  " << get<1>(data3) << "  " << get<2>(data3);
    cout << get<3>(data3) << "  " << get<4>(data3) << "  " << get<5>(data3);







    return 0;
}