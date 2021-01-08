#include <iostream>

using namespace std;

int main() {
    cout << "You are a secret agent breaking into a secure server room...\n";
    cout << "You need to enter the correct codes to continue...\n";

    int code_numb_1 = 4;
    int code_numb_2 = 3;
    int code_numb_3 = 2;
    int code_numb_sum = code_numb_1 + code_numb_2 + code_numb_3;
    int code_numb_prod = code_numb_1 * code_numb_2 * code_numb_3;

    cout << code_numb_sum << endl;
    cout << code_numb_prod << endl;

    return 0;
}