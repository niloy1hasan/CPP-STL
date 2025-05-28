#include <iostream>
#include <deque>

using namespace std;
int main(){
    /*
    explanation:
    "deque" means double ended queue
    a special type of queue where can add element both side - front and back
    also can access elements by index
    
    syntax:
    deque<data type> dequeName;
    direct initialization is valid in this queue
    array style index based access
    ***deque mixed of vector and queue***

    common method:
    .push_back()
    .push_front()
    .pop_back()
    .pop_front()
    .front()
    .back()

    .size()
    .at()
    .empty()
    
    */

    deque<string> fruitName = {"Banana", "Mango", "Jackfruit", "Pineapple", "Lychee", "Grapes"};
    fruitName.push_back("Watermalon");
    fruitName.push_front("Apple");
    cout << "at index 4 element: " << fruitName[4] << "\n\n";

    cout << "Front element of the fruit list: " << fruitName.front() << "\n\n";
    cout << "back element of the fruit list: " << fruitName.back()  << "\n\n";

    fruitName.pop_back();
    fruitName.pop_front();

    cout << "after pop from front and back\n";
    cout << "Front element of the fruit list: " << fruitName.front() << "\n\n";
    cout << "back element of the fruit list: " << fruitName.back()  << "\n\n";

    
    cout << "Fruitlist all elements: \n";
    for(unsigned int i=0; i<fruitName.size(); i++){
        cout << fruitName[i] << " ";
    }



    return 0;
}