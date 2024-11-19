#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class FileDemo {
private:
    string filename;

public:
    FileDemo(string fname) {
        filename = fname;
    }

    void openFile() {
        ifstream file(filename);
        if (!file.is_open()) {
            cout << "Unable to open file " << filename << endl;
            return;
        }

        int lineNumber = 0;
        string line;
        while (getline(file, line)) {
            lineNumber++;
        }

        file.close();
        cout << "Total number of lines: " << lineNumber << endl;
    }
};

int main() {
    string filename;
    cout << "Enter filename: ";
    cin >> filename;

    FileDemo fileDemo(filename);
    fileDemo.openFile();

    return 0;
}