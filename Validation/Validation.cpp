/**************************  Validation Class ***********************************/

//Create StudentValidation Class
class StudentValidation
{
public:
    int validateStudent(Student student)
    {
         if(student.getName().size()==0||
           student.getName().size()<3||
           student.getName().size()>12)
        {
            cout<<"Invalid Name !"<<endl;
        }
        else if(student.getAge()>=30||student.getAge()<=18)
        {
          cout<<"Invalid Age !"<<endl;
        }
        else if(student.getPhoneNumber()[0]!='0'||
                (
                (student.getPhoneNumber()[1]+student.getPhoneNumber()[2])!=('1' + '0')&&
                (student.getPhoneNumber()[1]+student.getPhoneNumber()[2])!=('1' + '1')&&
                (student.getPhoneNumber()[1]+student.getPhoneNumber()[2])!=('1' + '2')&&
                (student.getPhoneNumber()[1]+student.getPhoneNumber()[2])!=('1' + '5')
                )||student.getPhoneNumber().size()!=11
                )
                {
                    cout<<"Invalid Phone Number !"<<endl;
                }
                else if(student.getGPA()>5 || student.getGPA()<0)
                {
                    cout<<"Invalid GPA !"<<endl;
                }
                else
                    {
                   return 1;
                    }
                    return -1;
    }

};
//Create CourseValidation Class
class CourseValidation
{
public:
    int validateCourse(Course course)
    {

        if(course.getName().size()==0||course.getName().size()<4)
        {
            cout<<"Invalid Course Name !"<<endl;
        }
        else if(course.getHour()!=2 && course.getHour()!=3)
        {
            cout<<"Invalid Course Hour !"<<endl;
        }
        else
        {
            return 1;
        }
        return -1;
    }
};
//Create ProfessorValidation Class
class ProfessorValidation
{
public:
    int validateProfessor(Professor professor)
    {
        if(professor.getName().size()==0||
           professor.getName().size()<3||
           professor.getName().size()>12)
        {
            cout<<"Invalid Name !"<<endl;
        }
        else if(professor.getAge()>60||professor.getAge()<=28)
        {
          cout<<"Invalid Age !"<<endl;
        }
        else if(professor.getPhoneNumber()[0]!='0'||
                (
                (professor.getPhoneNumber()[1]+professor.getPhoneNumber()[2])!=('1' + '0')&&
                (professor.getPhoneNumber()[1]+professor.getPhoneNumber()[2])!=('1' + '1')&&
                (professor.getPhoneNumber()[1]+professor.getPhoneNumber()[2])!=('1' + '2')&&
                (professor.getPhoneNumber()[1]+professor.getPhoneNumber()[2])!=('1' + '5')
                )||professor.getPhoneNumber().size()!=11
                )
                {
                    cout<<"Invalid Phone Number !"<<endl;
                }
       else if(professor.getSalary()<5000||professor.getSalary()>17000)
                {
                    cout<<"Invalid Salary !"<<endl;
                }
                else
                    {
                   return 1;
                    }
                    return -1;
    }
};

//Create ValidationService Class
class ValidationService
{
public:
    void FullData(string Entity)
    {
             cout<<"Full "<<Entity<<"s Cannot Add More "<<Entity<<" !"<<endl;
    }
    void NotFound(string Entity , int id)
    {
             cout<<Entity<<" With ID ["<<id<<"] Not Found"<<endl;
    }

};
