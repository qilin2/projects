# <p align = center> C++ </p>

## <p align = center> <font size ='3'> <b> Project 1: [Average of the Middle](https://github.com/qilin2/projects/blob/main/cpp/middle_avg/middle_middle_middle.cpp) </b> </font> </p>
<br> About:
A particular talent competition has 4 judges, each of whom awards a score between 0 and 20 to each performer, such as 8.3, 10... A performer’s final score is determined by dropping the highest, and lowest score received, then averaging the 2 remaining scores. Write a program that uses this method to calculate a contestant’s score. It should include the following functions:

<br> <b> void getJudgeData </b>, should ask the user for a judge’s score, store it in a reference parameter variable, and validate it by not accepting judge scores lower than 0 or higher than 20. This function should be called by main once for each of the 4 judges.
<br> <b> void calcScore </b>, should calculate and display the average of the 2 scores that remain after dropping the highest and lowest scores the performer received. The result must be displayed with one decimal place.This function should be called just once by main and should be passed the 4 scores.

The last two functions, described below, should be called by calcScore, which uses the returned information to determine which of the scores to drop.

<br> <b> double findLowest </b>, should find and return the lowest of the 4 scores passed to it.
<br> <b> double findHighest </b>, should find and return the highest of the 4 scores passed to it. 

Sample Run:
<br> Enter the judge's score: 6
<br> Enter the judge's score: 70
<br> That is an invalid score. Please try again.
<br> The score must be from 0 to 20.
<br> Enter the judge's score: 19
<br> Enter the judge's score: 10
<br> Enter the judge's score: 8
<br> The performer's final score is 9.0.


## <p align = center> <font size ='3'> <b> Project 2: []() </b> </font> </p>
