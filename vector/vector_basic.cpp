#include <iostream>
#include <vector>
using namespace std;

int main(){
     /*
     syntax:
     vector<data type> vectorName
     
     vector<int> array; // size not defined, so can't store value by index
     vector<int> array = {2, 3, 1}; // direct initialization
     vector<int> array(size_value); // set size of vector
     vector<int> array(size_value, 0); // set 0 as dafault value for every elements of vector

     */
     vector<int> array;
     vector<int> array2 = {2, 3, 1, 5, 6, 4, 8, 9, 7};
     
     int size = 5;
     vector<int> array3(size);

     vector<int> array4(size, 0);



    return 0;
}