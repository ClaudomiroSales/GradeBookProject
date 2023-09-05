#include "GradeBook.h"

#include <iostream>
using std::cout;

GradeBook::GradeBook( )
:courseName(""), numAlunos( 0 ), MAXSIZENAME( 9 )
{
    
}

GradeBook::GradeBook( string name, int numAlunos )
:MAXSIZENAME( 9 )
{
    setCourseName( name );
    setNumAlunos( numAlunos );
}

GradeBook::GradeBook( int numAlunos )
:courseName(""), MAXSIZENAME( 9 )
{
    setNumAlunos( numAlunos );
}

GradeBook::GradeBook( const GradeBook& other )
:MAXSIZENAME( other.MAXSIZENAME )
{
    this->courseName = other.courseName;
    this->numAlunos  = other.numAlunos;
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

void GradeBook::setNumAlunos( int numAlunos )
{
    if ( numAlunos > 0 )
    {
        this->numAlunos = numAlunos;
        return;
    }
    
    this->numAlunos = 0;       
}

string GradeBook::getCourseName( ) const
{
    return courseName;
}

void GradeBook::displayMessage( bool check ) const 
{   
    if( check )
    {
        if( courseName.size( ) > 0 )
        {
            cout << "Welcome to the Grade Book for course " << courseName << '.';
            cout << " A Turma tem " << numAlunos << " aluno.\n";
            return;
        }             
        cout << "Welcome to the Grade Book. Curso sem nome.";  
    }    
}

void GradeBook::displayMessage( bool check )
{
    //Atribuição dentro da classe
    this->check = check;

    if( this-check )
    {
        if( courseName.size( ) > 0 )
        {
            cout << "Welcome to the Grade Book for course " << courseName << '.';
            cout << " A Turma tem " << numAlunos << " aluno.\n";
            return;
        }             
        cout << "Welcome to the Grade Book. Curso sem nome.";   
    }

}