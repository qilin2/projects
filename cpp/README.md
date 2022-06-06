# <p align = 'center'> .cpp <p>

<p align = 'center'> Project 1: average_middle <p> <br>
Purpose: Prints the average of two numbers that aren't the highest or the lowest in the array. <br>
Information: <br>
A particular talent competition has 4 judges, each of whom awards a score between 0 and 20 to each performer, such as 8.3, 10... A performer’s final score is determined by dropping the highest, and lowest score received, then averaging the 2 remaining scores. Write a program that uses this method to calculate a contestant’s score. It should include the following functions:
void getJudgeData, should ask the user for a judge’s score, store it in a reference parameter variable, and validate it by not accepting judge scores lower than 0 or higher than 20. This function should be called by main once for each of the 4 judges.
void calcScore, should calculate and display the average of the 2 scores that remain after dropping the highest and lowest scores the performer received. The result must be displayed with one decimal place.This function should be called just once by main and should be passed the 4 scores.
The last two functions, described below, should be called by calcScore, which uses the returned information to determine which of the scores to drop.
double findLowest, should find and return the lowest of the 4 scores passed to it.
double findHighest, should find and return the highest of the 4 scores passed to it.

Sample run: <br>
- Enter the judge's score: 6
- Enter the judge's score: 70
- That is an invalid score. Please try again.
- The score must be from 0 to 20.
- Enter the judge's score: 19
- Enter the judge's score: 10
- Enter the judge's score: 8
- The performer's final score is 9.0.

Process returned 0 (0x0)   execution time : 532.385 s
Press any key to continue.

Sample run:
- The ideal body weight for Tom Atto is 185 pounds.
- The ideal body weight for Eaton Wright is 135 pounds.
- The ideal body weight for Cary Oki is 165 pounds.
- I can't calculate the ideal body weight for Omar Ahmed.
<br>
-----------------------------------------------
<br>

 
<p align = 'center'> Project 2: loop_idealBodyWeight <p> <br>
Purpose: Prints the ideal body weight for each person in the file in a while loop. <br>
Information: <br>
Create a project named Assignment 5.  Save the file names-1.txt  Download names-1.txtin the project. Then write a program in main.cpp, that reads the data in names-1.txt file and outputs the full name and ideal body weight for each person on the screen.  Use a loop to read the names from the file.   Your program should also handle an arbitrary number of entries in the file instead of handling only four entries. You apply the formula only, if the persons’ height is 5 feet or more.
Ideal Body Weight Estimation: A simple rule to estimate your ideal body weight is to allow 110 pounds for the first 5 feet of height and 5 pounds for each additional inch.
110 + ((heightInFeet - 5) * 12 + additionalInches  ) * 5
For example, a person that 6 feet and 1 inches tall would be 110 + ((6-5) * 12 + 1 ) * 5

Sample run: <br>
- The ideal body weight for Tom Atto is 185 pounds.
- The ideal body weight for Eaton Wright is 135 pounds.
- The ideal body weight for Cary Oki is 165 pounds.
- I can't calculate the ideal body weight for Omar Ahmed.
