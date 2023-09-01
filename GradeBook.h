#ifndef GRADEBOOK_H
#define GRADEBOOK_H

class GradeBook
{
public:

    GradeBook ( );    
    GradeBook( int );

    int getCourseName( ) const;
    
    
private:

    int courseName;

};

#endif // GRADEBOOK_H