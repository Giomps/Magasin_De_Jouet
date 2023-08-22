#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int a = 20;
    int *p = &a;
    int **pp = &p;
    int ***ppp = &pp;


    cout << "a = " << p << "(" << *p << ")"<< endl;
    cout << "b = " << pp << "(" << **pp  << ")" << endl;
    cout << "c = " << ppp << "(" << ***ppp << ")" << endl;

    return 0;
}