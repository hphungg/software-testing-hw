#include <bits/stdc++.h>
using namespace std;

const int numTest = 8;
const string NAME = "main.exe";
const string outNAME = "main.out";

int main() {
    for (int iTest = 1; iTest <= numTest; iTest++) {
        system(NAME.c_str());
        if (system(("fc " + outNAME + "test" + to_string(iTest) + ".out").c_str()) != 0) {
            cout << "Test " << iTest << ": Failed";
        } else {
            cout << "Test " << iTest << ": Passed";
        }
    }
    return 0;
}