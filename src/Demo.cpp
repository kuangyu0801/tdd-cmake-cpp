#include "Demo.hpp"
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void Demo::demoIterator() {
    cout << "demoIterator()" << endl;
    vector<string> v = {"first", "second", "third", "forth", "fifth"};
    auto b = v.begin();
    auto e = v.end();
    cout << "size: " << e - b << endl;
    for (auto i = v.begin(); i < v.end(); i++) {
        cout << *i << endl;
    }
}

void Demo::demoArray() {
    cout << "[demoArray()]" << endl;
    // array must be declared with cons expression
    int size = 3;
    int arr[] = {1, 2, 3};
    int arr_copy[size];
    // accessing array element with iterator
    // std::begin()/end() is C11 feature
    for (auto i = begin(arr); i != end(arr); i++) {
        cout << *i << endl;
        cout << i << endl;
    }
    
    // accessing array with pointer
    for (int* i = arr; i != arr + 3; i ++) {
        cout << *i << endl;
        cout << i << endl;
    }

    for (int i = 0; i < size; i ++) {
        arr_copy[i] = arr[i];
    }

    int arr1[5] = {1, 2, 3}; // rest element is padded with 0;
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
}

void Demo::demoPointer() {

}

void Demo::demoVector() {
    cout << "demoVector" << endl;
    vector<int> v1;
    // a vector with 10 elements initialized with 2;
    vector<int> v2(10, 2);
    cout << v2.size() << endl;

    // a vector with 2 elements initialized with 10;
    vector<int> v3(2, 10);
    cout << v3.size() << endl;

    // a vector with two elements 2, 10
    vector<int> v4{2, 10};
    cout << v4.size() << endl;

    // vector
    vector<int> v4_copy(v4);

    v4_copy.push_back(11);
    for (auto i : v4_copy) {
        i *= i;
    }

    for (auto i : v4_copy) {
        cout << i << " ";
    }

    // reference will change the vector element
    for (auto &i : v4_copy) {
        i *= i;
    }

    for (auto i : v4_copy) {
        cout << i << " ";
    }
}

void Demo::demoCString() {
    cout << "[demoCString()]" << endl;
    char cs1[] = "This is a c-style string";
    int char_size = strlen(cs1);
    int arr_size = sizeof(cs1) / sizeof(cs1[0]);
    cout << "characters size: " << char_size << endl;
    printf("array size (including null char '/0'): %d \n", arr_size);
}

void Demo::demoString() {
    cout << "[demoString()]" << endl;
    string s1 {"This is a string object"};
    printf("String s1: %s \n", s1.c_str());
    printf("Iterating through the string... \n");
    int i = 0;
    for (auto c : s1) {
        printf("%d-th char is: %c \n", i, c);
        i++;
    }
}