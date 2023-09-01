
#include <iostream>
using std::cout;

#include "GradeBook.h"
#include "GradeBook.cpp"

int main()
{
   int codeCourse = 0;
   GradeBook gradebook1( codeCourse );

   cout << "Course number: " << gradebook1.getCourseName() << '\n';  
   
   return 0;
}