#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
using std::string;

class GradeBook
{
public:

    GradeBook ( );    
    GradeBook( string, int = 0 );
    GradeBook( int );
    GradeBook( const GradeBook & );

    void setCourseName( string );

    void setNumAlunos( int );

    string getCourseName( ) const;
    inline int getnumGradeBooks( )   const { return numGradeBooks;   }
    inline int getnumAlunosEscola( ) const { return numAlunosEscola; }
    
    void displayMessage( bool = true ) const;
    void displayMessage( bool = true );
    
private:

    string courseName;

    int numAlunos;

    bool check;

    int numGradeBooks;

    int numAlunosEscola;

    const int MAXSIZENAME = 7;    

};

#endif // GRADEBOOK_H