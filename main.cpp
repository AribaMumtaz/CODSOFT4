#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the text file: ";
    cin >> filename;

    // Open the file
    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Error: Could not open the file." << endl;
        return 1;  // Exit with an error code
    }

    string line;
    int wordCount = 0;

    // Read the file line by line
    while (getline(file, line)) {
        istringstream iss(line);
        string word;

        while (iss >> word) {
            wordCount++;
        }
    }

    // Close the file
    file.close();

    cout << "Total word count in the file: " << wordCount << endl;

    return 0;
}