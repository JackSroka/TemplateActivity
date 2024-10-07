#include <iostream>
#include <string>

using namespace std;
template <typename T>
T max_two(T thing1, T thing2){
    if (thing1 > thing2){
        return thing1;
    } else {
        return thing2;
    }
}

template <typename T>
T max_three(T thing1, T thing2, T thing3){
    if (thing1 > thing2){
        if (thing1 > thing3) {
            return thing1;
        } else {
            return thing3;
        }
    } else if (thing2 > thing3) {
        return thing2;
    } else {
        return thing3;
    }
}

template <typename T>
string swap(T thing1, T thing2){
    T temp = thing1;
    T jemp = thing2;
    thing2 = temp;
    thing1 = jemp;
    return to_string(thing1) + " " + to_string(thing2);
}

int main() {
    cout << max_two(1,2) << "\n";
    cout << max_three(1,2,3) << "\n";
    cout << max_three(1,3,2) << "\n";
    cout << max_three(3,2,1) << "\n";
    cout << swap(1,2) << "\n";

    return 0;
}
