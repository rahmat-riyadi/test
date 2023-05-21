#include <iostream>
using namespace std;

int main(){

    int a = 1;

    string c = (a % 2 == 1) ? "ganjil" : "genap";

    cout << "a = " << c << endl;

    return 0;
}