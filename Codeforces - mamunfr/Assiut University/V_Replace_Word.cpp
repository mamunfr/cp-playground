#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cin >> text;

    string wordToReplace = "EGYPT";
    size_t foundIndex = text.find(wordToReplace);

    while (foundIndex != string::npos) {
        text.replace(foundIndex, wordToReplace.length(), " ");
        foundIndex = text.find(wordToReplace, foundIndex + 1);
    }

    cout << text << endl;
    return 0;
}
