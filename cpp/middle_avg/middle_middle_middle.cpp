// Program: Inputs four double inputs and computes the average of two inputs 
// which aren't the lowest and the highest.
// Name: `.qilin
// Date: 05/24/2022

// Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


// Function Prototype(s)
void getJudgeData(double &);
void getCalcScore(double score1, double score2, double score3, double score4);
double findLowest(double score1, double score2, double score3, double score4);
double findHighest(double score1, double score2, double score3, double score4);
double findAverage(double score1, double score2, double score3, double score4, 
                   double highest, double lowest);

int main()
{
    // Declaring Variable(s)
    // Global Variables
    double score1, score2, score3, score4;

    // Function Calling(s)
    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getCalcScore(score1, score2, score3, score4);

    return 0; // Terminates Program Successfully.
}

// Function(s)
void getJudgeData(double &score)
{
    cout << "Enter a judge's score: ";
    cin >> score; // Prompts for user's input

    // Input Validation Loop
    while(score < 0 || score > 20)
    {
        cout << "That is an invalid score. Please try again" << endl;
        cout << "The score must be from 0 to 20." << endl;
        cout << "Enter the judge's score: ";
        cin >> score;
    }
}

void getCalcScore(double score1, double score2, double score3, double score4)
{
    // Declaring Variable(s)
    // Local Variable(s)
    double average, high, low;

    // Function Calling(s)
    high = findHighest(score1, score2, score3, score4);
    low = findLowest(score1, score2, score3, score4);
    average = findAverage(score1, score2, score3, score4, high, low); 

    // Numbers are set to print with one decimal point
    cout << fixed << setprecision(1);

    // Output Result
    cout << "The performer's final score: " << average << endl;

}

double findHighest(double score1, double score2, double score3, double score4)
{
    // Declaring Variable(s)
    // Local Variable(s)
    double highestNum;

    // Initializes highestNum to score# if score# is the highest of all scores
    // if any one of four conditions are met.
    if ((score1 > score2) && (score1 > score3) && (score1 > score4))
    {
        highestNum = score1;
    }
    else if((score2 >score1) && (score2 > score3) && (score2 > score4))
    {
        highestNum = score2;
    }
    else if ((score3 > score1) && (score3 > score2) && (score3 > score4))
    {
        highestNum = score3;
    }
    else if((score4 > score1) && (score4 > score1) && (score4 > score2))
    {
        highestNum = score4;
    }

    return highestNum;
}


double findLowest(double score1, double score2, double score3, double score4)
{
    // Declaring Variable(s)
    // Local Variable(s)
    double lowestNum;

    // Initializes lowestNum to score# if score# is the lowest of all scores
    // if any one of four conditions are met.
    if((score1 < score2) && (score1 < score3) && (score1 < score4))
    {
        lowestNum = score1;
    }
    else if((score2 < score1) && (score2 < score3) && (score2 < score4))
    {
        lowestNum = score2;
    }
    else if((score3 < score1) && (score3 < score2) && (score3 < score4))
    {
        lowestNum = score3;
    }
    else if((score4 < score1) && (score4 < score2) && (score4 < score3))
    {
        lowestNum = score4;
    }

    return lowestNum;
}

double findAverage(double score1, double score2, double score3, 
                   double score4, double highest, double lowest)
{
    // Declaring Variable(s)
    // Local Variable(s)
    double num1, num2, average;

    // Sets num1 to score# and num2 to score# that aren't the higesht or the lowest
    //if any one of the six conditions are met.
    if((fabs(highest-score1) < 1e-7 && (fabs(lowest-score2) < 1e-7)) 
       || (fabs(highest-score2) < 1e-7 && fabs(lowest-score1)< 1e-7))
    {
        num1 = score3;
        num2 = score4;
    }
    else if((fabs(highest-score1) < 1e-7 && fabs(lowest-score3) < 1e-7) 
             || (fabs(highest-score3) < 1e-7 && fabs(lowest-score1)< 1e-7))
    {
        num1 = score2;
        num2 = score4;
    }
    else if((fabs(highest-score1) < 1e-7 && fabs(lowest-score4) < 1e-7) 
             || (fabs(highest-score4) < 1e-7 && fabs(lowest-score1)< 1e-7))
    {
        num1 = score2;
        num2 = score3;
    }
    else if((fabs(highest-score2) < 1e-7 && fabs(lowest-score3) < 1e-7) 
            || (fabs(highest-score3) < 1e-7 && fabs(lowest-score2)< 1e-7))
    {
        num1 = score1;
        num2 = score4;
    }
    else if((fabs(highest-score2) < 1e-7 && fabs(lowest-score4) < 1e-7) 
             || (fabs(highest-score4) < 1e-7 && fabs(lowest-score2)< 1e-7))
    {
        num1 = score1;
        num2 = score3;
    }
    else if((fabs(highest-score3) < 1e-7 && fabs(lowest-score4) < 1e-7) 
             || (fabs(highest-score4) < 1e-7 && fabs(lowest-score3)< 1e-7))
    {
        num1 = score1;
        num2 = score2;
    }   
    // Calculates the Average
    average = (num1 + num2) / 2;

    return average;
}

/* Output:
Enter the judge's score: 6
Enter the judge's score: 70
That is an invalid score. Please try again.
The score must be from 0 to 20.
Enter the judge's score: 19
Enter the judge's score: 10
Enter the judge's score: 8
The performer's final score is 9.0. 
*/
