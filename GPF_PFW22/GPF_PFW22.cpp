// GPF_PFW22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    bool innerDoor = 0;
    cout << "Enter the state of the inner door (0=closed, 1=open)" << endl;
    cin >> innerDoor;
    bool porchDoor = 0;
    cout << "Enter the state of the porch door (0=closed, 1=open)" << endl;
    cin >> porchDoor;

    int whichDoor = 1;
    cout << "Enter which door you want to change state (1 = inner, 2 = outer, 3 both)" << endl;
    cin >> whichDoor;

    switch (whichDoor) {
    case 1:
        innerDoor = !innerDoor;
        break;
    case 2:
        porchDoor = !porchDoor;
        break;
    case 3:
        innerDoor = !innerDoor;
        porchDoor = !porchDoor;
        break;
    default:
        cout << "Invalid " << endl;
    }

    cout << "Inner Door State: " << innerDoor << " Outer Door State: " << porchDoor << endl;

    if (innerDoor == 1 && porchDoor == 1) {
        cout << "Your cat has escaped to attack the local wildlife for disturbing its naptime" << endl;
    }
    else if (innerDoor || porchDoor) {
        cout << "Your cat has escaped to attack the local wildlife for disturbing its naptime due to one door open" << endl;
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
