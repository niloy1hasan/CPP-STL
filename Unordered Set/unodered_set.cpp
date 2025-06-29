#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    /*
    syntax:
    unordered_set<data type> unOrderedSet_Name;

    - it's structure similar of hash table
    - it is the contrast of set, that mean's data is not in sorted form
    - direct initialization is valid

    **unordered set methods:**
    .insert()
    .size()
    .erase()
    .clear()
    .find() //if not found will return set.end()
    .end()
    .begin()
    .count() // if found return 1 else 0
    
    */


    unordered_set<int> data = {3, 8, 2, -1, -5, 9 , 4};
    //another way
    //unorderd_set<int> data {3, 8, 2, -1, -5, 9, 4};

    for(int i:data){
        cout << i << " ";
    }
    cout << "\n";


    unordered_set<string> brand_name {"Samsung", "Apple", "huawei", "Xiaomi", "Techno"};

    cout << "\n\nSize of brand_name: " << brand_name.size() << "\n\n";

    brand_name.insert("Vivo");
    brand_name.insert("Oppo");
    brand_name.insert({"Redmi", "Nokia", "Walton", "OnePlus", "Apple"});

    for(auto s: brand_name){
        cout << s << "  ";
    }

    cout << "\n\nNow brand_name size: " << brand_name.size() << endl;


    cout << "\n\nremoved Walton from set, now set is:\n\n";
    brand_name.erase("Walton");

    for(auto s:brand_name){
        cout << s << "  ";
    }
    cout << "\n\n";


    if(brand_name.find("Nokia")!=brand_name.end()){
        cout << "Nokia has on the list\n";
    } else {
        cout << "not found";
    }

    brand_name.erase("Nokia");


    if(brand_name.find("Nokia")!=brand_name.end()){
        cout << "Nokia has on the list\n";
    } else {
        cout << "not found\n";
    }

    if(brand_name.count("Vivo")){
        cout << "found\n";
    } else {
        cout << "not found\n";
    }

    brand_name.clear();
    cout << "\n\nNow brand_name size: " << brand_name.size() << endl;

    return 0;
}