#include <iostream>
#include <vector>
#include "records.h"

using namespace std;

vector<Student> students = {
    Student(1, "George P. Burdell"),
    Student(2, "Nancy Rhodes")
};

vector<Course> course = {
    Course(1, "Algebra", 5),
    Course(2, "Physics", 4),
    Course(3, "English", 3),
    Course(4, "Econmics", 4),
};

vector<Grade> grades = {
    Grade(1,1,'B'), Grade(1,2,'A'), Grade(1,3,'C'),
    Grade(2,1,'A'), Grade(2,2,'A'), Grade(2,4,'B')
};

float GPA = 0.0f;
int id;
float total_points;
float total_credits;

float get_grade_value(char grade)
{
    float num_grade;
    switch (grade)
    {
    case 'A':
        num_grade = 4.0f;
        break;
    
    case 'B':
        num_grade = 3.0f;
        break;

    case 'C':
        num_grade = 2.0f;
        break;

    case 'D':
        num_grade = 1.0f;
        break;
    default:
        num_grade = 0.0f;
        break;
    }
    return num_grade;
}

void get_total_points_and_credits(void)
{
    float points = 0.0f, t_points = 0.0f, t_credits = 0.0f;

    for (size_t i = 0; i < grades.size(); i++)
    {
        if (grades[i].get_student_id() == (id+1))
        {
            points = course[i].get_credits() * get_grade_value(grades[i].get_grade());
            t_points += points;
            t_credits += course[i].get_credits();
        }
    }

    total_points = t_points;
    total_credits = t_credits;
}

int main(void)
{
    cout << "Enter a student ID: ";
    cin >> id;

    get_total_points_and_credits();

    GPA = total_points / total_credits;

    string student_str = students[id].get_name();

    cout << "The GPA for "   << student_str << " is "  << GPA << endl;
}