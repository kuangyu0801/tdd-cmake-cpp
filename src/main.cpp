#include <iostream>
#include "Formular.h"
#include "Demo.hpp"

using namespace std;

int main() {
    cout << "bla: " << Formular::bla(2) << endl;
    Demo::demoCString();
    Demo::demoString();
    Demo::demoArray();
    Demo::demoVector();
    Demo::demoIterator();
    return 0;
}