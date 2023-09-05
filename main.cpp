
#include <iostream>
using std::cout;

#include "GradeBook.h"
#include "GradeBook.cpp"

int main()
{
   GradeBook gradebook1( "Math" );
   //GradeBook gradebook2( "Physics" );
   GradeBook gradebook2( "Physicssfdsfdsfgsdfgsdfgsdfgdsfgsdfgsdfgsdfgsdfdsfgsdfgfsadgf" );
   
   
   gradebook1.displayMessage( );
   gradebook2.displayMessage( );

   cout << "Os cursos sao: " << gradebook1.getCourseName( ) << " e " << gradebook2.getCourseName( ) << '\n';
    
   return 0;
}