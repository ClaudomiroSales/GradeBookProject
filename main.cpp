
#include <iostream>
using std::cout;

#include "GradeBook.h"
#include "GradeBook.cpp"

int main()
{
   GradeBook gradebook0;
   GradeBook gradebook1( "Math" );
   const GradeBook GRADEBOOK2( "Physicssfdsfdsfgsgsdfgfgsdfgsdfgsdfdsfgsdfgfsadgf", 30 );
   GradeBook gradebook3( "Geography", 60 );
   GradeBook gradebook4( 20 );
   GradeBook gradebook5( GRADEBOOK2 ); //Constructor de cópia

   cout << "Usando o constructor de copia: GradeBook gradebook5( gradebook2 ); \n";
   cout << "O gradebook5 eh copia do GRADEBOOK2 (const).\n";
   GRADEBOOK2.displayMessage( );
   gradebook5.displayMessage( );  
    
   return 0;
}