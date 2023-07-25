#include <bits/stdc++.h>
#include "Controller/Controller.cpp"
using namespace std;
int process;
int id;
void displaySystem()
{
    cout<<"\t\t ********************* Management System *****************"<<endl;
    cout<<"Please Enter Your Process you need to Do !"<<endl;
    cout<<"1 - About Students"<<"\t"<<"2 - About Courses"<<endl;
    cout<<"3 - About Professors"<<"\t"<<"4 - Exit"<<endl;


}
void ShowList(string Entity)
{
    cout<<"\t\t ********************* "<<Entity<<" Management System *****************"<<endl;
    cout<<"1 - Add "<<Entity<<"\t\t"<<"2 - Edit "<<Entity<<endl;
    cout<<"3 - Show "<<Entity<<"s"<<"\t"<<"4 - Show "<<Entity<<" By ID"<<"  "<<endl;
    cout<<"5 - Exit"<<endl;
}
void addStudent()
{
       cout<<"Please Enter Student Data:"<<endl;
        Student student;
        cout<<"Enter Student Name :";
        string name;
        cin>>name;
        student.setName(name);
        cout<<"Enter Student Age :";
        int age;
        cin>>age;
        student.setAge(age);
        cout<<"Enter Student GPA :";
        double gpa;
        cin>>gpa;
        student.setGPA(gpa);
        cout<<"Enter Student Phone Number :";
        string phoneNumber;
        cin>>phoneNumber;
        student.setPhoneNumber(phoneNumber);
        StudentController studentController;
        id =studentController.addStudent(student);
       if(id != -1){
        cout<<"Success Added With ID ["<<id<<"]"<<endl;
}
}
void addCourse()
{
    cout<<"Please Enter Course Data : "<<endl;
    Course course;
    cout<<"Enter Course Name:";
    string name;
    cin>>name;
    course.setName(name);
    cout<<"Enter Course Hour :";
    double hour;
    cin>>hour;
    course.setHour(hour);
    CourseController courseController;
   id=courseController.addCourse(course);
   if(id != -1)
   {
   cout<<"Success Added With ID ["<<id<<"]"<<endl;
   }
}
void addProfessor()
{
    cout<<"Please Enter Professor Data : "<<endl;
    Professor professor;
    cout<<"Enter Professor Name:";
    string name;
    cin>>name;
    professor.setName(name);
    cout<<"Enter Professor Age :";
    int age;
    cin>>age;
    professor.setAge(age);
    cout<<"Enter Professor Phone Number :";
    string phoneNumber;
    cin>>phoneNumber;
    professor.setPhoneNumber(phoneNumber);
    cout<<"Enter Professor Salary :";
    double Salary;
    cin>>Salary;
    professor.setSalary(Salary);
    ProfessorController professorController;
    id=professorController.addProfessor(professor);
    if(id != -1)
    {
    cout<<"Success Added With ID ["<<id<<"]"<<endl;
    }
}
void showStudentById()
{
        cout<<"Please Enter StudentID to Showing :";
       cin>>id;
       StudentController studentController;
       studentController.ShowStudentById(id);
}
void showCourseById()
{
       cout<<"Please Enter CourseID to Showing :";
       cin>>id;
       CourseController courseController;
       courseController.ShowCourseById(id);
    }
void showProfessorById()
{
       cout<<"Please Enter CourseID to Showing :";
       cin>>id;
       ProfessorController professorController;
       professorController.ShowProfessorById(id);
}
void editStudent()
{
     cout<<"Please Enter Student Data:"<<endl;
     Student student;
     cout<<"Enter Student ID :";
     cin>>id;
     student.setId(id);
     cout<<"Enter Student Name :";
     string name;
     cin>>name;
     student.setName(name);
     cout<<"Enter Student Age :";
     int age;
     cin>>age;
     student.setAge(age);
     cout<<"Enter Student GPA :";
     double gpa;
     cin>>gpa;
     student.setGPA(gpa);
     cout<<"Enter Student Phone Number :";
     string phoneNumber;
     cin>>phoneNumber;
     student.setPhoneNumber(phoneNumber);
     StudentController studentController;
     studentController.updateStudent(student);

}
void editCourse()
{
    cout<<"Please Enter Course Data : "<<endl;
    Course course;
    cout<<"Enter Course ID :";
    cin>>id;
    course.setId(id);
    cout<<"Enter Course Name :";
    string name;
    cin>>name;
    course.setName(name);
    cout<<"Enter Course Hour :";
    double hour;
    cin>>hour;
    course.setHour(hour);
    CourseController courseController;
    courseController.updateCourse(course);
}
void editProfessor()
{

    cout<<"Please Enter Professor Data : "<<endl;
    Professor professor;
    cout<<"Enter Professor ID :";
    cin>>id;
    professor.setId(id);
    cout<<"Enter Professor Name :";
    string name;
    cin>>name;
    professor.setName(name);
    cout<<"Enter Professor Age :";
    int age;
    cin>>age;
    professor.setAge(age);
    cout<<"Enter Professor Phone Number :";
    string phoneNumber;
    cin>>phoneNumber;
    professor.setPhoneNumber(phoneNumber);
    cout<<"Enter Professor Salary :";
    double Salary;
    cin>>Salary;
    professor.setSalary(Salary);
    ProfessorController professorController;
    professorController.updateProfessor(professor);
}
void showStudents()
{
 Data data;
    cout<<"\t ID \t\t Name \t\t Age \t\t PhoneNumber \t\t GPA"<<endl;
        for(int i=0;i<data.indexStudent;i++)
        {
      cout<<"\t "<<data.students[i].getID()<<"\t\t"<<data.students[i].getName()<<"\t\t"<<data.students[i].getAge()<<"\t\t"<<data.students[i].getPhoneNumber()<<"\t\t"<<data.students[i].getGPA()<<endl;
        }
}
void showCourses()
{
 Data data;
    cout<<"\t ID \t\t Name \t\t Hour"<<endl;
        for(int i=0;i<data.indexCourse;i++)
        {
      cout<<"\t "<<data.courses[i].getID()<<"\t\t"<<data.courses[i].getName()<<"\t\t"<<data.courses[i].getHour()<<endl;
        }
}
void showProfessors()
{
 Data data;
    cout<<"\t ID \t\t Name \t\t Age \t\t PhoneNumber \t\t Salary"<<endl;
        for(int i=0;i<data.indexProfessor;i++)
        {
      cout<<"\t "<<data.professors[i].getID()<<"\t\t"<<data.professors[i].getName()<<"\t\t"<<data.professors[i].getAge()<<"\t\t"<<data.professors[i].getPhoneNumber()<<"\t\t"<<data.professors[i].getSalary()<<endl;
        }
}

void SwitchStudent()
{
    switch(process)
        {
        case 1:
            addStudent();
            break;
        case 2:
           editStudent();
           break;
        case 3:
           showStudents();
           break;
        case 4:
           showStudentById();
           break;
        case 5:
           break;
        default:
            cout<<"Invalid Choice"<<endl;

        }
}
void SwitchCourse()
{
     switch(process)
        {
        case 1:
            addCourse();
            break;
        case 2:
            editCourse();
            break;
        case 3:
           showCourses();
            break;
        case 4:
           showCourseById();
           break;
        case 5:
           break;
        default:
            cout<<"Invalid Choice"<<endl;
        }
}
void SwitchProfessor()
{
     switch(process)
        {
        case 1:
           addProfessor();
           break;
        case 2:
            editProfessor();
            break;
        case 3:
            showProfessors();
            break;
        case 4:
           showProfessorById();
           break;
        case 5:
           break;
        default:
            cout<<"Invalid Choice"<<endl;
        }

}
int main()
{
    int flag=0;
    while(true)
    {
    displaySystem();
    cin>>process;
    switch(process)
    {
    case 1:
        ShowList("Student");
        cin>>process;
        SwitchStudent();
        break;
    case 2:
        ShowList("Course");
        cin>>process;
        SwitchCourse();
     break;
    case 3:
        ShowList("Professor");
        cin>>process;
        SwitchProfessor();
        break;
    case 4:
        flag=1;
        break;
    default:
        cout<<"Invalid Choice !"<<endl;
    }
    if(flag==1)
      {
        break;
      }
    }
}
