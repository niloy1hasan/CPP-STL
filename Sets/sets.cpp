#include <iostream>
#include <set>
using namespace std;

int main(){
    /*
    syntax:
    set<data type> setName;
    
    - set only store unique elements
    - stored data as ascending sort automatically
    - already stored equal/duplicate value if try to add, set will ignore it
    - on set, can add or remove elements, but can't change value once it added
    - can't accessed by index number

    - direct initialization is valid on set
    method of set:
    insert() - add element
    erase()  - remove element
    size()   - size of set
    empty()  - check if set is empty
    clear()  - clear all elements of set

    */

    set<string> animalName = {"Tiger", "Lion", "Elephant", "Cow", "Goat", "Cat", "Giraffe"};
    set<int> numberSet = {4,8, 9, 5, 1, 19, 13, 2};


    cout << "animal set size: " << animalName.size() << "\n\n";

    cout << "Animal List:\n";

    for(string s: animalName){
        cout << s << "\n";
    }


    cout << "\n\n" << "Number set: \n";
    for(int i: numberSet){
        cout << i << "  ";
    }


    //add animal
    animalName.insert("Sheep");
    animalName.insert("Camel");

    //add duplicate
    animalName.insert("Tiger");

    //remove element
    animalName.erase("Goat");

    cout << "\n\n" << "New animal list: \n";
    for(string s: animalName){
        cout << s << "\n";
    }

    //remove all element
    animalName.clear();

    cout << "\n" << "after remove all elements, now size is:";
    
    if(animalName.empty())cout << " empty";
    else cout << animalName.size();

    cout << "\n\n\n";


    return 0;
}