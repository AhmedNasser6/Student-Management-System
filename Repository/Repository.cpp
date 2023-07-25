#include <bits/stdc++.h>
#include "../Model/Models.cpp"
using namespace std;
// Static Data
class Data
{
public:
   static Student students[25];
   static int indexStudent;
   static int idStudent;
   static Course courses[25];
   static int indexCourse;
   static int idCourse;
   static Professor professors[15];
   static int indexProfessor;
   static int idProfessor;
};
// Initialization Static Data
Student Data::students[25];
int Data::indexStudent=0;
int Data::idStudent=1;
Course Data::courses[25];
int Data::indexCourse=0;
int Data::idCourse=1;
Professor Data::professors[15];
int Data::indexProfessor=0;
int Data::idProfessor=1;

/////////////////// Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Interface StudentRepository
class StudentRepository
{
public:
    virtual int addStudent(Student student)=0;
    virtual Student getStudentById(int id)=0;
    virtual int editStudent(Student student)=0;
    virtual Student showStudents()=0;

};

//Create Class StudentRepositoryIMPL(Implementation)
class StudentRepositoryIMPL :public StudentRepository
{
private:
    Data data;
    Student invalidStudent;
    int index = -1;
    public:
    int addStudent(Student student)
    {
        if(data.indexStudent==25)
        {
          return -1;
        }
        else
        {
        student.setId(data.idStudent++);
        data.students[data.indexStudent]=student;
        data.indexStudent++;
        }
        return student.getID();
    }
    Student getStudentById(int id)
    {
        for(int i=0;i<data.indexStudent;i++)
        {
            if(data.students[i].getID()==id)
            {
                return data.students[i];
            }
        }
            invalidStudent.setId(-1);
            return invalidStudent;
    }

  int editStudent(Student student)
    {
         for(int i=0;i<data.indexStudent;i++)
        {
            if(data.students[i].getID()==student.getID())
            {
                index = i;
                break;
            }
        }
        if(index == -1)
        {
            return -1;
        }
        else
        {
           data.students[index]= student;
           return index;

        }
    }

Student showStudents()
{
   for(int i=0;i<data.indexStudent;i++)
        {
                return data.students[i];

        }
}




};

/////////////////// Course \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
//Interface CourseRepository
class CourseRepository
{
   virtual int addCourse(Course cousre)=0;
   virtual Course getCourseById(int id)=0;
   virtual int editCourse(Course course)=0;
   virtual Course showCourses()=0;
};

//Create Class CourseRepositoryIMPL
class CourseRepositoryIMPL :public CourseRepository
{
  private:
   Data data;
   Course invalidCourse;
   int index=-1;
    public:
    int addCourse(Course course)
    {
        if(data.indexCourse==25)
        {
         return -1;
        }
        else
        {
        course.setId(data.idCourse++);
        data.courses[data.indexCourse]=course;
        data.indexCourse++;
        }
        return course.getID();
    }
     Course getCourseById(int id)
    {
        for(int i=0;i<data.indexCourse;i++)
        {
            if(data.courses[i].getID()==id)
            {
                return data.courses[i];
            }
        }
            invalidCourse.setId(-1);
            return invalidCourse;
    }

    int editCourse(Course course)
     {
         for(int i=0;i<data.indexCourse;i++)
        {
            if(data.courses[i].getID()==course.getID())
            {
                index = i;
                break;
            }
        }
        if(index ==-1)
        {
            return -1;
        }
        else
        {
           data.courses[index]= course;
           return index;
        }
    }

Course showCourses()
{
   for(int i=0;i<data.indexCourse;i++)
        {
                return data.courses[i];

        }
}




};

/////////////////// Professor \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
//Interface ProfessorRepository
class ProfessorRepository
{
    virtual int addProfeesor(Professor professor)=0;
    virtual Professor getProfessorById(int id)=0;
    virtual int editProfessor(Professor professor)=0;
    virtual Professor showProfessors()=0;
};

//Create Class ProfessorRepositoryIMPL
class ProfessorRepositoryIMPL :public ProfessorRepository
{
   private:
   Data data;
   Professor invalidProfessor;
   int index=-1;
    public:
    int addProfeesor(Professor professor)
    {
        if(data.indexProfessor==25)
        {
         return -1;
        }
        else
        {
        professor.setId(data.idProfessor++);
        data.professors[data.indexProfessor]=professor;
        data.indexProfessor++;
        }
       return professor.getID();
    }

    Professor getProfessorById(int id)
    {
        for(int i=0;i<data.indexProfessor;i++)
        {
            if(data.professors[i].getID()==id)
            {
                return data.professors[i];
            }
        }
            invalidProfessor.setId(-1);
            return invalidProfessor;
    }


    int editProfessor(Professor professor)
      {
         for(int i=0;i<data.indexProfessor;i++)
        {
            if(data.professors[i].getID()==professor.getID())
            {
                index = i;
                break;
            }
        }
        if(index ==-1)
        {
            return -1;
        }
        else
        {
           data.professors[index]= professor;
           return index;
        }
    }


Professor showProfessors()
  {
   for(int i=0;i<data.indexProfessor;i++)
        {
                return data.professors[i];

        }
  }


};
