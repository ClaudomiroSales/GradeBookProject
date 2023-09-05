#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
using std::string;

class GradeBook
{
public:

    GradeBook ( );    
    GradeBook( string );

    void setCourseName( string );

    string getCourseName( ) const;
    
    void displayMessage( );
    
private:

    string courseName;

    const int MAXSIZENAME = 7;

};

#endif // GRADEBOOK_H