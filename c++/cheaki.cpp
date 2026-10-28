#include <iostream>
using namespace std;

int main() {
    string x;
    cout << "enter a string  " ;
    getline(cin, x); /* words k darmain agr space bi ho tab bi fill read krta
     ha full sentence dosara space ane k bad read nai krta simple wla*/
    cout << "You entered: " << x << endl;
}