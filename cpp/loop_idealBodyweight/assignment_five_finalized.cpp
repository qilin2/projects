// Program: Reads input from file names-1.txt and
// outputs the ideal body weight of the person
// Date: 05/19/2022

// Libraries
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Main Function
int main ()
{
    // Declare Variables
    ifstream inFile;
    string userName;
    int heightInFeet;
    int additionalInches;
    int idealBodyWeight;

    // Opens File
    inFile.open("names-1.txt");

    // Checks if the File can be Opened 
    if(!inFile.is_open())
    {
        cout << "ERROR: File Not Found!" << endl;

        //Terminates Program
        return 1; 
    }

    // Reads First Line 
    getline(inFile, userName);

    // Reads until End of File
    while(!inFile.fail())
    {
        //Intakes current data from "names-1.txt"
        inFile >> heightInFeet;
        if((inFile.fail()) || (heightInFeet < 5))
        {
            // Outputs that the Ideal Weight cannot be calculated
            cout << "I can't calculate the ideal weight for " <<
            userName << "." << endl;
        }
        else 
        {
            //Intakes current data from "names-1.txt"
            inFile >> additionalInches;
            if(inFile.fail())
            {
                additionalInches = 0;

                // Calculates the Ideal Body Weight
                idealBodyWeight = 110 
                + (((heightInFeet - 5) * 12) + additionalInches) * 5;

                // Outputs the Ideal Body Weight for the current userName
                cout << "The ideal body weight for " << userName << 
                " is " << idealBodyWeight << " pounds." << endl;
            }
            else 
            {
                // Calculates the Ideal Body Weight
                idealBodyWeight = 110 
                + (((heightInFeet - 5) * 12) + additionalInches) * 5;

                // Outputs the Ideal Body Weight for the current userName
                cout << "The ideal body weight for " << userName << 
                " is " << idealBodyWeight << " pounds." << endl;
            }
            // Removes New Line
            inFile.ignore(); 
        }
        // Clears Error State
        inFile.clear();
        
        // Reads the Next Line
        getline(inFile, userName);

        // Breaks the While Loop if there are no more lines to intake
        if(userName.empty() && !inFile.eof()) 
        {
            break; // Ends Loop
        }
    }

    // Closes File
    inFile.close();

    // Terminates Program
    return 0;

// Output:
// The ideal body weight for Tom Atto is 185 pounds.
// The ideal body weight for Eaton Wright is 135 pounds.
// The ideal body weight for Cary Oki is 165 pounds.
// I can't calculate the ideal body weight for Omar Ahmed.
}


