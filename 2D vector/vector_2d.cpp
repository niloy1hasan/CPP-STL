#include <iostream>
#include <vector>
using namespace std;

void print2DVector(vector<vector<int>> & arr){
    for(auto i: arr){
        for(auto j: i){
            cout << j << " ";
        }

        cout << "\n";
    }

    cout << "\n\n";
}

int main(){
    /*
    2D array can be implement through vector, that can be do by vector of vector

    syntax:
    without size:
    vector<vector<dataType>> DDvectorName;

    with size:
    vector<vector<dataType>> DDvectorName(rows, vector<dataType>(columns, defaultValue));
    
    direct initialization:
    vector<vector<int>> arr = {{a1, a2}, {b1, b2}, {c1, c3},.....,{x1, x2}};

    */

    vector<vector<int>> vector1;
    vector<vector<int>> vector2(3, vector<int>(5, 2));
    vector<vector<int>> vector3 = {{1, 5, 8}, {18, 9, 11}, {3, 7, 19}};

    print2DVector(vector1);
    print2DVector(vector2);
    print2DVector(vector3);

    //insert elements
    vector1.push_back({3,2,1});
    vector1.push_back({9, 6, 3});
    vector1.push_back({2, 4, 8, 16});

    print2DVector(vector1);


    //access and update

    vector2[0][2] = 5;
    vector2[1][3] = 5;
    vector2[2][4] = 5;


    print2DVector(vector2);

    //deleting row
    vector1.erase(vector1.begin()+2);
    print2DVector(vector1);

    //deleting a elements
    vector1[1].erase(vector1[1].begin()+1);
    print2DVector(vector1);


    //getting size

    int row = vector2.size();
    //first row's column size
    int column = vector2[0].size();

    cout << "row number of vector2 : " << row << endl;
    cout << "column number of vector2's first row: " << column << endl;

    vector2.push_back({89, 83,  12, 18, 73, 18});
    vector2.erase(vector2.begin()+1);
    vector2[0].assign({1, 8, 3});
    vector2.insert(vector2.begin()+1, {83, 22, 15, 88, 11, 91, 833, 92, 91, 19});

    for(unsigned int i=0; i<vector2.size(); i++){
        for(unsigned int j=0; j<vector2[i].size(); j++){
            cout << vector2[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}