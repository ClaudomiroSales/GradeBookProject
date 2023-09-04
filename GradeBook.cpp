#include "GradeBook.h"

#include <iostream>
using std::cout;

GradeBook::GradeBook( )
{
    courseName = "";
}

GradeBook::GradeBook( string name )
{
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