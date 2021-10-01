#include <iostream>
#include <string>
#include <time.h>
#include "mainwidget.h"

using namespace std;

class InputMachine {
public:
    string posx, pitch;
    void ChangeNumbers()
    {
        if (toggleString)
            posx = to_string(rand() % 100);
        else
            pitch = to_string(rand() % 100);
        toggleString = !toggleString;
    }

private:
    bool toggleString = false;
};
