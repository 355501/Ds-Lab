#include <iostream>

using namespace std;
struct student
{
int id,semester_completed,credits_completed;
float cgpa;

};


int main ()
{

student s[10];
s[1].id=22-46507-1;
s[1].semester_completed=6;
s[1].credits_completed=113;
s[1].cgpa=3.25;
//cout<<s[1].id<<" "<<endl;
//cout<<s[1].semester_completed<<" "<<endl;
//cout<<s[1].credits_completed<<" "<<endl;
//cout<<s[1].cgpa<<" "<<endl;


s[2].id=22-45508-1;
s[2].semester_completed=8;
s[2].credits_completed=103;
s[2].cgpa=3.21;
//cout<<s[2].id<<" "<<endl;
//cout<<s[2].semester_completed<<" "<<endl;
//cout<<s[2].credits_completed<<" "<<endl;
//cout<<s[2].cgpa<<" "<<endl;


s[3].id=22-45509-1;
s[3].semester_completed=7;
s[3].credits_completed=123;
s[3].cgpa=3.11;
//cout<<s[3].id<<" "<<endl;
//cout<<s[3].semester_completed<<" "<<endl;
//cout<<s[3].credits_completed<<" "<<endl;
//cout<<s[3].cgpa<<" "<<endl;

s[4].id=22-45510-1;
s[4].semester_completed=8;
s[4].credits_completed=133;
s[4].cgpa=3.18;
//cout<<s[4].id<<" "<<endl;
//cout<<s[4].semester_completed<<" "<<endl;
//cout<<s[4].credits_completed<<" "<<endl;
//cout<<s[4].cgpa<<" "<<endl;

s[5].id=22-45509-1;
s[5].semester_completed=7;
s[5].credits_completed=123;
s[5].cgpa=3.11;
//cout<<s[5].id<<" "<<endl;
//cout<<s[5].semester_completed<<" "<<endl;
//cout<<s[5].credits_completed<<" "<<endl;
//cout<<s[5].cgpa<<" "<<endl;

s[6].id=22-45510-1;
s[6].semester_completed=8;
s[6].credits_completed=133;
s[6].cgpa=3.41;
//cout<<s[6].id<<" "<<endl;
//cout<<s[6].semester_completed<<" "<<endl;
//cout<<s[6].credits_completed<<" "<<endl;
//cout<<s[6].cgpa<<" "<<endl;

s[7].id=22-45515-1;
s[7].semester_completed=4;
s[7].credits_completed=52;
s[7].cgpa=3.10;
//cout<<s[7].id<<" "<<endl;
//cout<<s[7].semester_completed<<" "<<endl;
//cout<<s[7].credits_completed<<" "<<endl;
//cout<<s[7].cgpa<<" "<<endl;

s[8].id=22-45516-1;
s[8].semester_completed=8;
s[8].credits_completed=123;
s[8].cgpa=3.34;
//cout<<s[8].id<<" "<<endl;
//cout<<s[8].semester_completed<<" "<<endl;
//cout<<s[8].credits_completed<<" "<<endl;
//cout<<s[8].cgpa<<" "<<endl;


s[9].id=22-45609-1;
s[9].semester_completed=9;
s[9].credits_completed=123;
s[9].cgpa=3.56;
//cout<<s[9].id<<" "<<endl;
//cout<<s[9].semester_completed<<" "<<endl;
//cout<<s[9].credits_completed<<" "<<endl;
//cout<<s[9].cgpa<<" "<<endl;

s[10].id=22-46523-1;
s[10].semester_completed=9;
s[10].credits_completed=122;
s[10].cgpa=3.00;
//cout<<s[10].id<<" "<<endl;
//cout<<s[10].semester_completed<<" "<<endl;
//cout<<s[10].credits_completed<<" "<<endl;
//cout<<s[10].cgpa<<" "<<endl;

cout << "\nScholarship Students (CGPA >= 3.75):" << endl;
    for (int i = 1; i < 11; i++)
        {
  if (s[i].cgpa >= 3.75); {
            cout << "Student ID: " << s[i].id << endl;
        }
    }



    cout << "\nStudents with more than 50 credits:" << endl;
    for (int i = 1; i < 11; i++) {
        if (s[i].credits_completed > 50) {
            cout << "Student ID: " << s[i].id << endl;
        }
    }



    cout << "\nStudents with at least 2 semesters and 28 credits:" << endl;
    for (int i = 1; i < 11; i++) {
        if (s[i].semester_completed >= 2 && s[i].credits_completed >= 28) {
            cout << "Student ID: " << s[i].id << endl;
        }
    }



return 0;
}

