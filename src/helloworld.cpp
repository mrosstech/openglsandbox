#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    vector<string> msg = {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (string& x : msg) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}