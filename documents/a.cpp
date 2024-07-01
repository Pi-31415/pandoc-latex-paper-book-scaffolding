// Write a CPP program to read and display and image file, with FileReader class and error handling as classes

#include <iostream>
#include <fstream>
#include <string>
#include <exception>
using namespace std;

class FileReader {
    private:
        string path;
        ifstream file;
    public:
        FileReader(string path) {
            this->path = path;
            this->file.open(path);
        }
        void read() {
            if (this->file.is_open()) {
                string line;
                while (getline(this->file, line)) {
                    cout << line << endl;
                }
                this->file.close();
            } else {
                throw runtime_error("File not found");
            }
        }
};

int main() {
    FileReader fileReader("documents/a.cpp");
    try {
        fileReader.read();
    } catch (runtime_error e) {
        cout << e.what() << endl;
    }
    return 0;
}


