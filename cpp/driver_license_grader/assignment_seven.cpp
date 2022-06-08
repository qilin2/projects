// Program: Prompts the user for 20 valid characters and grades it according
//          to the Driver License Test.
// Date   : 06-07-2022

// Libraries
#include <iostream>
#include <cctype>
using namespace std;

// Function Prototype(s)
void input(char[], int);
void checkAnswers(char[], char[], int &, int &, int);
void printArray(int[], int);
void testResult(int, int);

// MAIN
int main() 
{
    // Declaration and Initialization
    // Local Variable(s)
    const int ARRAY_SIZE = 20;
    char userArray[ARRAY_SIZE];
    char answerArray[ARRAY_SIZE] = { 'A', 'D', 'B', 'B', 'C', 
                                     'B', 'A', 'B', 'C', 'D', 
                                     'A', 'C', 'D', 'B', 'D', 
                                     'C', 'C', 'A', 'D', 'B'};
    int userScore = 0;
    int totalScore = 20;

    // Instruction(s) for User:
    cout << "Please enter the student's answer for each question." << endl;
    cout << "Please click Enter after typing each answer." << endl;
    cout << "Please only enter in A, B, C, D or a, b, c, d." <<endl;

    // Function Calling(s)
    input(userArray, ARRAY_SIZE);
    checkAnswers(userArray, answerArray, userScore, totalScore, ARRAY_SIZE);

    return 0;
}

/*
Output:
Please enter the student's answer for each question.
Please click Enter after typing each answer.
Please only enter in A, B, C, D or a, b, c, d.
Question 1: A
Question 2: C
Question 3: B
Question 4: B
Question 5: a
Question 6: d
Question 7: d
Question 8: d
Question 9: a
Question 10: b
Question 11: v
Use only A, B, C, D or a, b, c, d.
Please Try Again.
a
Question 12: F
Use only A, B, C, D or a, b, c, d.
Please Try Again.
d
Question 13: a
Question 14: A
Question 15: C
Question 16: B
Question 17: A
Question 18: D
Question 19: B
Question 20: C
Questions that were answered incorrectly: 
2 5 6 7 8 9 10 12 13 14 15 16 17 18 19 20 
The student failed the exam.
Correct Answers: 4
Incorrect Answers: 16
*/

// Function(s)
// Declares and Initializes an array based on the user's input
void input(char inputArray[], int sizeOfArray)
{
    // Declaration and Initialization
    // Local Variable(s)
    char userAnswer;
    char acceptedAnswers[8] = { 'A', 'B', 'C', 'D', 'a', 'b', 'c', 'd'};

    // Loop untils all questions are answered correctly
    for( int i = 0; i < sizeOfArray; i++)
    {
        cout << "Question " << i + 1 << ": "; // Prints the current question
        cin >> userAnswer; // Prompts for user input

        // Checks if the answer entered is acceptable
        while(userAnswer != acceptedAnswers[0] 
              && userAnswer !=acceptedAnswers[1] 
              && userAnswer != acceptedAnswers[2] 
              && userAnswer != acceptedAnswers[3] 
              && userAnswer != acceptedAnswers[4] 
              && userAnswer != acceptedAnswers[5] 
              && userAnswer != acceptedAnswers[6] 
              && userAnswer != acceptedAnswers[7])
        {
            cout << "Use only A, B, C, D or a, b, c, d." << endl;
            cout << "Please Try Again." << endl;
            cin >> userAnswer;
        }

        // Converts lower case alphabets into upper case alphabets
        if(islower(userAnswer))
        {
            inputArray[i] = toupper(userAnswer);
        }
        else
        {
            inputArray[i] = userAnswer;
        }
    }
}

// Checks if the element between two arrays are the same or not
void checkAnswers(char responseArray[], char answerArray[], 
                  int &userScore, int &totalScore, int sizeOfArray)
{
    // Declaration and Initialization
    // Local Variable(s)
    int wrongAnswers[20] = {};

    for(int i = 0; i < sizeOfArray; i++)
    {
        if(responseArray[i] == answerArray[i])
        {
            // Increment userScore by 1.
            userScore = userScore + 1;
        }
        else 
        {
            // Stores the wrong answer into the array
            wrongAnswers[i] = i + 1;
        }
    }
    
    // Output(s)
    cout << "\n Questions that were answered incorrectly: " << endl;

    // Function Calling(s)
    printArray(wrongAnswers, sizeOfArray);
    testResult(userScore, totalScore);
}

// Prints all the elements in an array.
void printArray(int inputArray[], int sizeOfArray)
{
    for(int i = 0; i < sizeOfArray; i++)
    {
        if(inputArray[i] != 0)
        {
            cout << inputArray[i] << " ";
        }
    }
    cout << endl;
}

// Determines if the user passed the test or not.
void testResult(int userScore, int totalScore)
{
    if(userScore < 15)
    {
        cout << "The student failed the exam." << endl;
    }
    else
    {
        cout << "The student passed the exam!" << endl;
    }
    cout << "Correct Answers: " << userScore << endl;
    cout << "Incorrect Answers: " << totalScore - userScore << endl;
}