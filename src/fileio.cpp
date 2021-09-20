#include <iostream>
#include <fstream>
using namespace std;

void writeToFile(string fileName){
    ofstream dataFile(fileName);
    dataFile << "This file was written to correctly!";
    cout << "The file has finished writing" << endl;
}
int main(){
    string desiredFileName;
    cout << "Enter a file name: ";
    cin >> desiredFileName;
    writeToFile(desiredFileName);
}
