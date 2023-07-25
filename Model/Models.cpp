#include <bits/stdc++.h>
using namespace std;
//Create Class ShareData
class ShareData
{
private:
    int id;
    string name;
public:
    //Setter
     void setId(int id)
    {
        this->id=id;
    }
    void setName(string name)
    {
        this->name=name;
    }
    //Getter
      int getID()
    {
        return id;
    }
    string getName()
    {
        return name;
    }

};
//Create Class BaseEntity
class BaseEntity : public ShareData
{
private:
    int age;
    string phoneNumber;
public:
    //Setter

     void setAge(int age)
    {
        this->age=age;
    }
     void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber=phoneNumber;
    }
    //Getter

    int getAge()
    {
        return age;
    }
     string getPhoneNumber()
    {
        return phoneNumber;
    }
};
//Create Class Professor
class Professor : public BaseEntity
{
private:
    double Salary;
    int studentIDs[10];
public:
    //Setter
     void setSalary(double salary)
    {
        this->Salary=salary;
    }

    void setStudentIDs(int studentIDs[10])
    {
        for(int i=0 ;i<sizeof(studentIDs)/sizeof(studentIDs[0]);i++)
        {
            this->studentIDs[i]=studentIDs[i];
        }
    }

    //Getter
     double getSalary()
    {
        return Salary;
    }
   int *getStudentsIDs()
    {
        return studentIDs;
    }

};
//Create Class Course
class Course : public ShareData
{
private:
    double hour;
    int studentIDs[5];
public:
    //Setter

    void setHour(double hour)
    {
        this->hour=hour;
    }
    void setStudentIDs(int studentIDs[5])
    {
        for(int i=0 ;i<sizeof(studentIDs)/sizeof(studentIDs[0]);i++)
    {
            this->studentIDs[i]=studentIDs[i];
    }
    }
    //Getter

    double getHour()
    {
        return hour;
    }

   int * getCourses()
   {
       return studentIDs;
   }
};
//Create Class Student
class Student : public BaseEntity
{
private:
    double GPA;
    Professor professors[5];
    Course courses[6];
public:
    //Setter
     void setGPA(double gpa)
    {
        this->GPA=gpa;
    }
     void SetCourses(Course arr[5])
    {
    for(int i=0;i<sizeof(courses)/sizeof(courses[0]);i++)
    {
        this->courses[i]=courses[i];
    }
    }

    void SetProfessors(Professor arr[5])
    {
    for(int i=0;i<5;i++)
    {
        this->professors[i]=professors[i];
    }
    }
    //Getter
     double getGPA()
    {
        return GPA;
    }
     Professor * getProfessors()
    {
    return professors;
    }

    Course * getCourses()
    {
    return courses;
    }
};

