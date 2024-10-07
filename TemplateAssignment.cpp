#include <iostream>
using namespace std;

template <typename T>
T max_two(T thing1, T thing2){
    if (thing1 > thing2){
        return thing1;
    } else {
        return thing2;
    }
}

int max_three(int num1, int num2, int num3) {
    if(num1 > num2 && num1 > num3) {
        cout << "The first number is greater" << endl;
    }
    else if(num2 > num1 && num2 > num3) {
        cout << "The second number is greater" << endl;
    }
    else if(num3 > num1 && num3 > num2) {
        cout << "The third number is greater" << endl;
    }
    
}

int swap(int num1, int num2) {
    num = num1;
    num1 = num2;
    num2 = num;
}
int main() {
    cout << max_two(1,2);
    
    return 0;
}
