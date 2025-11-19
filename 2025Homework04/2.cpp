#include <bits/stdc++.h>

using namespace std;

int main()
{
    int score;
    string grade;
    double gpa;
    cin>>score;
    if(score<60) {grade="F";gpa=0;}
    else if(score==60) {grade="D-";gpa=1.0;}
    else if(score<=63) {grade="D";gpa=1.3;}
    else if(score==64) {grade="D+";gpa=1.5;}
    else if(score<=67) {grade="C-";gpa=1.7;}
    else if(score<=71) {grade="C";gpa=2.0;}
    else if(score<=74) {grade="C+";gpa=2.3;}
    else if(score<=77) {grade="B-";gpa=2.7;}
    else if(score<=81) {grade="B";gpa=3.0;}
    else if(score<=84) {grade="B+";gpa=3.3;}
    else if(score<=89) {grade="A-";gpa=3.7;}
    else if(score<=94) {grade="A";gpa=4.0;}
    else {grade="A+";gpa=4.3;}
    cout<<"百分制="<<score<<"，五分制="<<grade<<"，GPA="<<gpa<<endl;

    return 0;
}