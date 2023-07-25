#include "../Repository/Repository.cpp"
#include "../Validation/Validation.cpp"
////////////////////////// StudentService  \\\\\\\\\\\\\\\\\\\
// Interface StudentService
class StudentService
{
 public:
     virtual int addStudent(Student student)=0;
     virtual Student getStudentById(int id)=0;
     virtual int editStudent(Student student)=0;
     virtual Student showStudents()=0;

};
//Create Class StudentServiceIMPL(Implementation)
class StudentServiceIMPL
{
private:
  StudentRepositoryIMPL studentRepository;
  StudentValidation  studentValidation;
  ValidationService  validationService;
  Student studentResult;
  Student showStudent;

public:
    int addStudent(Student student)
    {
       if(studentValidation.validateStudent(student) == 1)
       {
           int id = studentRepository.addStudent(student);
           if(id == -1)
           {
               validationService.FullData("Student");
           }
           else
           return id;
       }

        return -1;
    }
    Student getStudentById(int id)
    {
       studentResult = studentRepository.getStudentById(id);
       if(studentResult.getID()==-1)
       {

          validationService.NotFound("Student",id);

       }
       return studentResult;
    }


    int editStudent(Student student)
    {
      int index = studentRepository.editStudent(student);
     if(index ==-1)
     {
       validationService.NotFound("Student",student.getID());
     }
     else
     {
       cout<<"Success Edit Student With ID ["<<student.getID()<<"]"<<endl;
     }

    }

   Student showStudents()
     {
      return studentRepository.showStudents();

     }
};
////////////////////////// CourseService \\\\\\\\\\\\\\\\\\\\\
// Interface CourseService
class CourseService
{
public:
    virtual int addCourse(Course course)=0;
    virtual Course getCourseById(int id)=0;
    virtual int editCourse(Course course)=0;
    virtual Course showCourses()=0;
};
//Create Class CourseServiceIMPL
class CourseServiceIMPL
{
private:
   CourseRepositoryIMPL courseRepository;
   CourseValidation   courseValidation;
   ValidationService  validationService;
   Course courseResult;
public:
    int addCourse(Course course)
    {
        if(courseValidation.validateCourse(course) == 1)
               {
            int id = courseRepository.addCourse(course);
                 if(id ==-1)
                 {
                    validationService.FullData("Course");
                 }
                 else
                 {
                    return id;
                 }
               }
                return -1;
    }
    Course getCourseById(int id)
    {
       courseResult = courseRepository.getCourseById(id);
       if(courseResult.getID()==-1)
       {
          validationService.NotFound("Course",id);
       }
       return courseResult;
    }


    int editCourse(Course course)
    {
      int index = courseRepository.editCourse(course);
     if(index ==-1)
     {
       validationService.NotFound("Course",course.getID());
     }
     else
     {
       cout<<"Success Edit Course With ID ["<<course.getID()<<"]"<<endl;
     }

    }

    Course showCourses()
    {
      return courseRepository.showCourses();

    }
};
///////////////////////// ProfessorService \\\\\\\\\\\\\\\\\\\\
// Interface ProfessorService
class ProfessorService
{
 virtual int addProfessor(Professor professor)=0;
 virtual Professor getProfessorById(int id)=0;
 virtual int editProfessor(Professor professor)=0;
 virtual Professor showProfessors()=0;
};
//Create Class ProfessorServiceIMPL
class ProfessorServiceIMPL
{
private:
   ProfessorRepositoryIMPL professorRepository;
   ProfessorValidation professorValidation;
   ValidationService  validationService;
   Professor professorResult;
public:
     int addProfessor(Professor professor)
    {
        if(professorValidation.validateProfessor(professor) == 1)
    {
              int id = professorRepository.addProfeesor(professor);
       if(id == -1)
       {
           validationService.FullData("Professor");
       }
       else
       {
           return id;
       }

    }
       return -1;
    }

    Professor getProfessorById(int id)
    {
       professorResult = professorRepository.getProfessorById(id);
       if(professorResult.getID()==-1)
       {
            validationService.NotFound("Professor",id);
       }
       return professorResult;
    }

  int editProfessor(Professor professor)
    {
      int index = professorRepository.editProfessor(professor);
     if(index ==-1)
     {
       validationService.NotFound("Professor",professor.getID());
     }
     else
     {
       cout<<"Success Edit Professor With ID ["<<professor.getID()<<"]"<<endl;
     }

    }

    Professor showProfessors()
    {
      return professorRepository.showProfessors();
    }
};
