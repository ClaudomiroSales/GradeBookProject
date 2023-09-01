#include "GradeBook.h"

GradeBook::GradeBook( )
{
    courseName = 0;
}

GradeBook::GradeBook( int name )
{
    courseName = name;
}

int GradeBook::getCourseName( ) const
{
    return courseName;
}