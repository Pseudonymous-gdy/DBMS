#include<iostream>
#include <windows.h>
#include"test.h"
using namespace std;

int main()
{
    Sleep(5000);
    int a, b;
    cout << "Hello, World!" << endl;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    cout << lcm(a, b) << endl;
    return 0;
}