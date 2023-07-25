#include "../Service/Service.cpp"
////////////////////////// StudentController  \\\\\\\\\\\\\\\\\\\
// Create Class StudentController
class StudentController
{
private:
    StudentServiceIMPL studentService;
    Student ShowStudent;
public:
   int addStudent(Student student)
    {
     return studentService.addStudent(student);
    }

   void ShowStudentById(int id)
   {
    ShowStudent=studentService.getStudentById(id);
     if(ShowStudent.getID()!=-1)
      {
      cout<<"\t ID \t\t Name \t\t Age \t\t PhoneNumber \t\t GPA"<<endl;
      cout<<"\t "<<ShowStudent.getID()<<"\t\t"<<ShowStudent.getName()<<"\t\t"<<ShowStudent.getAge()<<"\t\t"<<ShowStudent.getPhoneNumber()<<"\t\t"<<ShowStudent.getGPA()<<endl;
      }
   }

   void updateStudent(Student student)
   {
       studentService.editStudent(student);
   }

   Student showStudentss()
   {
      return studentService.showStudents();

   }

};
////////////////////////// CourseController \\\\\\\\\\\\\\\\\\\\\
// Create Class CourseController
class CourseController
{
 ///////////////////////// ProfessorController \\\\\\\\\\\\\\\\\\\\
// Create Class ProfessorController
private:
      CourseServiceIMPL courseService ;
      Course ShowCourse;
public:
      int addCourse(Course course)
    {
       return courseService.addCourse(course);
    }
    void ShowCourseById(int id)
   {

      ShowCourse=courseService.getCourseById(id);
       if(ShowCourse.getID()!=-1)
         {
         cout<<"\t\t ID \t\t Name \t\t Hour"<<endl;
         cout<<"\t\t"<<ShowCourse.getID()<<"\t\t"<<ShowCourse.getName()<<"\t  "<<ShowCourse.getHour()<<endl;
         }
   }

     void updateCourse(Course course)
   {
       courseService.editCourse(course);
   }

    Course showcoursess()
   {
      return courseService.showCourses();

   }

};
////////////////////////// ProfessorController \\\\\\\\\\\\\\\\\\\\\
// Create Class ProfessorController
class ProfessorController
{
private:
   ProfessorServiceIMPL  professorService;
   Professor ShowProfessor;
public:
     int addProfessor(Professor professor)
    {
       return professorService.addProfessor(professor);
    }
    void ShowProfessorById(int id)
   {
      ShowProfessor = professorService.getProfessorById(id);
      if(ShowProfessor.getID()!=-1)
      {
      cout<<"\t\t ID \t\t Name \t\t Age \t\t PhoneNumber \t\t Salary"<<endl;
      cout<<"\t\t"<<ShowProfessor.getID()<<"\t\t"<<ShowProfessor.getName()<<"\t\t"<<ShowProfessor.getAge()<<"\t\t"<<ShowProfessor.getPhoneNumber()<<"\t\t"<<ShowProfessor.getSalary()<<endl;
      }
   }

     void updateProfessor(Professor professor)
   {
       professorService.editProfessor(professor);
   }

   Professor showProfessorss()
   {
      return professorService.showProfessors();

   }
};
