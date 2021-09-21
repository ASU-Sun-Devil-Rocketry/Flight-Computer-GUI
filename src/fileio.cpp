/************************************************************* 
* fileio.cpp - Program designed to read data from the rocket *
*              and output to a text file named by the user   *
*                                                            *
* Contributers: Andrew Byers                                 *
*                                                            * 
* Date last updated: 9/20/2021                               *
*************************************************************/ 
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <cctype>
using namespace std;

//FUNCTION: Reads text data from a dummy text file (dataInput.txt) and writes it 
//          to a new file of the name given in the parameter.
void writeToFile(string fileName){
    fileName = fileName + ".txt";
    ofstream dataFile(fileName);
    string textTest;
    ifstream readFile("dummyFile.txt");
    while (getline(readFile, textTest)){
        dataFile << textTest << endl;
    }
    cout << "The file has finished writing to " << fileName << endl;
    readFile.close();
    dataFile.close();
}

//TODO: Acccount for the following variables, and format properly in final program:
//      
//      X,Y,Z Position | Roll, Pitch, and Yaw Angles | X,Y,Z Speeds/Velocities 
//      Roll, Pitch, and Yaw Rotation Rates/Angular Velocities | Barometric Pressure/Altitude
int main(){
    bool validFileName = true;
    string desiredFileName;
    do {  
        cout << "Enter a file name: ";
        getline(cin, desiredFileName);
        cout << "Read: " << desiredFileName << endl;
        for(int i = 0; i < sizeof(desiredFileName); i++){
            if(isspace(desiredFileName[i])){
                validFileName = false;
                cout << "Please enter a file name with no spaces" << endl;
                break;
            }
            else if(desiredFileName[i] == '.'){
                validFileName = false;
                cout << "Please enter a file name with no extension" << endl;
                break;
            }
            else{
                validFileName = true;
            }
        }
    } while(!validFileName);
    writeToFile(desiredFileName);
}
