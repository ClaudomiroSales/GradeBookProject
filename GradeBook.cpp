#include "GradeBook.h"

#include <iostream>
using std::cout;

GradeBook::GradeBook( )
{
    courseName = "";
}

GradeBook::GradeBook( string name )
{
    setCourseName( name );
}

void GradeBook::setCourseName( string name )
{
    if ( name.length( ) > MAXSIZENAME )
        {
            courseName = name.substr( 0, MAXSIZENAME );
            cout << "Nome alterado. Excedeu o valor maximo. \n";
            return;
        }

    courseName = name;
}


string GradeBook::getCourseName( ) const
{
    return courseName;
}

void GradeBook::displayMessage( ) 
{
     cout << "Welcome to the Grade Book for course " << courseName << '\n';
}