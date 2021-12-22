//By: Michelle Ly

#include <iostream>
#include <cstdlib>
using namespace std;

// Usage: ./calculate int char int
// char can either be: + x or %
int main(int argc, char *argv[]) {
    if ((argc < 4) || (argc > 4)){
        cerr << "Number of arguments is incorrect.";
        return 0;
    }

    int integer1 = atoi(argv[1]);
    int integer2 = atoi(argv[3]);
    string str = argv[2];

    if ((str != "x") && (str != "+") && (str != "%")) {
        cerr << "Bad operation choice.";
        return 0;
    }

    if ((integer2 == 0) && (str == "%")){
        cerr << "Cannot divide by zero.";
        return 0;
    }

    if (str == "+"){
        cout << integer1 + integer2;
    }
    if (str == "x"){
        cout << integer1 * integer2;
    }
    if (str == "%"){
        cout << integer1 % integer2;
    }

    return 0;
}