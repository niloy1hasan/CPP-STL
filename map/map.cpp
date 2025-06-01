#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    /*
    syntax:
    map<key_dataType, value_dataType> mapName;

    - map stored elements as key/value pairs
    - map elements can't access by index, need to access by key
    - map elements are automatically sorted in ascending order
    - direct initialization is valid
    - once insert a key, key can't changed, but value can changed key
    - in a map, all keys are unique, if try to add duplicate/copy key, it will ignore the map
    
    map methods:
    .at(key)
    .insert({key, value})
    .size()
    .empty()
    .erase(key)
    .first
    .second
    .clear

    */

    map<string, string> captialName = {{"Bangladesh", "Dhaka",}, {"India", "New Delhi"}, {"Pakistan", "Islamabad"}, {"USA", "Washington DC"}, {"Australia", "Canbera"}};
    
    cout << "map size: " << captialName.size() << "\n\n";

    captialName.insert({"Japan", "Tokyo"});
    captialName.insert({"China", "Beijing"}); //for insert, string header must need to include

    cout << "Capital of Bangladesh: " << captialName["Bangladesh"] << "\n"; 
    /*array style access not recomanended,
    * if this key is not have in map, then program will crash
    */
    
    cout << "Capital of USA: " << captialName.at("USA");

    captialName.erase("USA"); // removed the data by key


    cout << "\n\n" << "All Data of capical List\n\n";

    for(auto i:captialName){
        cout << "Capital of " << i.first << " : " << i.second << "\n"; 
    }

    captialName.clear();

    cout << "List size: " << captialName.size();



    return 0;
}