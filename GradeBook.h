#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
using std::string;

class GradeBook
{
public:

    GradeBook ( );    
    GradeBook( string );

    string getCourseName( ) const;
    
    void displayMessage( );
    
private:

    string courseName;

};

#endif // GRADEBOOK_H