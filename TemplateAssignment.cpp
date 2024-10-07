#include <iostream>
using namespace std;

int max_two(int num1, int num2) {
    if(num1 > num2) {
        cout << "The first number is greater" << endl;
    }
    else if(num2 > num1) {
        cout << "The second number is greater" << endl;
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
    
    return 0;
}
