//cpp
#include "decision.h"

using std::string;

string get_letter_grade_using_if(int grade)
{
    string letter_grade;

    if (grade > 100 || grade < 0)
    {
        letter_grade = "Out of range.";
    }

    else if (grade >= 90)
    {
        letter_grade = "A";
    }
    else if (grade >= 80)
    {
        letter_grade = "B";
    }
    else if (grade >= 70)
    {
        letter_grade = "C";
    }
    else if (grade >= 60)
    {
        letter_grade = "D";
    }
    else
    {
        letter_grade = "F";
    }
    return letter_grade;

}

string get_letter_grade_using_switch(int grade)
{
    string letter_grade;
    int score = grade;
    if (score> 100 || score < 0)
    {
        letter_grade = "Out of range.";
    }
    else
    {
        switch(score / 10)
        {
            case 10:case 9:
                letter_grade = "A";
                break;
            case 8:
                letter_grade = "B";
                break;
            case 7:
                letter_grade = "C";
                break;
            case 6:
                letter_grade = "D";
                break;
            case 5:case 4: case 3: case 2: case 1: case 0:
                letter_grade = "F";
                break;
            default:
                letter_grade = "Out of range.";
        }
    }

    return letter_grade;

}