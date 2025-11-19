#include <bits/stdc++.h>

using namespace std;

int main()
{
    int score;
    int n=0;
    string grade;
    double gpa;
    cin>>score;
    n+=(score>=60);
    n+=(score>=61);
    n+=(score>=64);
    n+=(score>=65);
    n+=(score>=68);
    n+=(score>=72);
    n+=(score>=75);
    n+=(score>=78);
    n+=(score>=82);
    n+=(score>=85);
    n+=(score>=90);
    n+=(score>=95);
    switch (n)
    {
        case 0:grade="F";gpa=0;break;
        case 1:grade="D-";gpa=1.0;break;
        case 2:grade="D";gpa=1.3;break;
        case 3:grade="D+";gpa=1.5;break;
        case 4:grade="C-";gpa=1.7;break;
        case 5:grade="C";gpa=2.0;break;
        case 6:grade="C+";gpa=2.3;break;
        case 7:grade="B-";gpa=2.7;break;
        case 8:grade="B";gpa=3.0;break;
        case 9:grade="B+";gpa=3.3;break;
        case 10:grade="A-";gpa=3.7;break;
        case 11:grade="A";gpa=4.0;break;
        case 12:grade="A+";gpa=4.3;break;
    }
    cout<<"百分制="<<score<<"，五分制="<<grade<<"，GPA="<<gpa<<endl;

    return 0;
}