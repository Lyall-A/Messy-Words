#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {
    string input;
    cout << "Type something: ";
    getline(cin, input);
    string messy = input;
    transform(messy.begin(), messy.end(), messy.begin(), ::toupper);

    replace(messy.begin(), messy.end(), 'A', '4');
    replace(messy.begin(), messy.end(), 'E', '3');
    replace(messy.begin(), messy.end(), 'I', '1');
    replace(messy.begin(), messy.end(), 'O', '0');
    replace(messy.begin(), messy.end(), 'S', '5');
    replace(messy.begin(), messy.end(), 'T', '7');

    cout << "Messy: " << messy << "\n\n";
    system("echo Press any key to close");
    system("pause>nul");
    return 0;
}
