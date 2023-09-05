
#include <iostream>
using std::cout;

#include "GradeBook.h"
#include "GradeBook.cpp"

int main()
{
   GradeBook gradebook0;
   GradeBook gradebook1( "Math" );
   GradeBook gradebook2( "Physicssfdsfdsfgsdfgsdfgsdfgfgsdfgsdfgsdfdsfgsdfgfsadgf", 30 );
   GradeBook gradebook3( "Geography", 10 );
   GradeBook gradebook4( 20 );
   GradeBook gradebook5( gradebook2 ); //Constructor de cópia

   cout << "Usando o constructor de copia: GradeBook gradebook5( gradebook2 ); \n";
   cout << "O gradebook5 eh copia do grandebook2.\n";
   gradebook2.displayMessage( );
   gradebook5.displayMessage( );  
    
   return 0;
}