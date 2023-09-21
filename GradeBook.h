#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
using std::string;

class GradeBook
{
public:

    GradeBook ( );    
    GradeBook( string, int = 10 );
    GradeBook( int );
    GradeBook( const GradeBook & );

    void setCourseName( string );

    void setNumAlunos( int );

    string getCourseName( ) const;

    inline static int getnumGradeBooks( )   { return numGradeBooks; }
    inline static int getnumAlunosEscola( ) { return numAlunosEscola; }
    
    void displayMessage( bool = true ) const;
    void displayMessage( bool = true );
    
private:

    string courseName;

    int numAlunos;

    bool check;

    static int numGradeBooks;
    //Error check. Static não pode instanciar no .h
    //static int numGradeBooks = 0;

    static int numAlunosEscola;
    //Error check. Static não pode instanciar no .h
    //static int numAlunosEscola = 0;

    const static int MAXNUMALUNOSESCOLA;
    //Pode inicializar aqui ou no cpp
    //const static int MAXNUMALUNOSESCOLA = 100;

    const int MAXSIZENAME = 7;    

};

#endif // GRADEBOOK_H