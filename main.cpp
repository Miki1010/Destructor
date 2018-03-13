#include <iostream>
#include <strings.h>
using namespace std;

class Student
{
private:
    char *StudentName;
public:
    Student(char * Name)
    {
        StudentName = new char[50];
        strcpy(StudentName,Name);
        cout << "Default Student Name is :" << StudentName << endl;
    }
    ~Student()
    {
        delete[] StudentName ;
    }
};

int main()
{
    char * Name = "Sam" ;
    Student Stud(Name);
    return 0;
}
