#include "GradeBook.h"

#include <iostream>
using std::cout;

//Instanciação de variáveis statics
int GradeBook::numGradeBooks = 0;
int GradeBook::numAlunosEscola = 0;
const int GradeBook::MAXNUMALUNOSESCOLA = 50;
string GradeBook::alunos[ NUMALUNOSMIN ] = {"Carlos Fernando", "Andreza Raphaela"};

GradeBook::GradeBook( )
:courseName(""), numAlunos( 0 ), MAXSIZENAME( 9 ), check( false )
{
    numGradeBooks++;
}

GradeBook::GradeBook( string name, int numAlunos )
:MAXSIZENAME( 9 ), check( false )
{
    setCourseName( name );
    setNumAlunos( numAlunos );

    numGradeBooks++;
}

GradeBook::GradeBook( int numAlunos )
:courseName(""), MAXSIZENAME( 9 ), check( false )
{
    setNumAlunos( numAlunos );

    numGradeBooks++;
}

GradeBook::GradeBook( const GradeBook& other )
:MAXSIZENAME( other.MAXSIZENAME ), check( other.check )
{
    this->courseName = other.courseName;
    setNumAlunos( other.numAlunos );

    numGradeBooks++;
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
    cout << "Numero de alunos na escola " << GradeBook::numAlunosEscola << '\n';
    cout << "Vagas restantes " << MAXNUMALUNOSESCOLA - GradeBook::numAlunosEscola << '\n';
    
    if ( numAlunos < 0 )
    {
        this->numAlunos = 0;
        return;
    }

    //A escola já está no limite máximo de alunos
    if( GradeBook::numAlunosEscola == MAXNUMALUNOSESCOLA )
    {
        this->numAlunos = 0;
        cout << "Nao ha mais vagas.\n\n";
        return;
    }
    
    //Tem mais vagas que o necessário
    if ( ( numAlunos + GradeBook::numAlunosEscola ) <= MAXNUMALUNOSESCOLA )
    {
        this->numAlunos = numAlunos;
        GradeBook::numAlunosEscola += this->numAlunos;  
        cout << "Novos alunos que conseguiram a matricula em " << this->courseName << ": " << this->numAlunos << "\n\n";
        return;          
    }        

    //Apenas parte dos alunos serão cadastrados para não ultrassar o número máximo
    this->numAlunos =  MAXNUMALUNOSESCOLA - GradeBook::numAlunosEscola;
    GradeBook::numAlunosEscola += this->numAlunos; 
    cout << "Apenas " << this->numAlunos << " conseguiram a matricula em " << this->courseName << ".\n\n";
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

    if( this->check )
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

void GradeBook::printListaAlunos( ) const
{
    for( int i = 0; i < NUMALUNOSMIN; i++ )
        cout << alunos[ i ] << '\n';
}

void GradeBook::fornecerNotas( double grades[ ], int ngrades )
{
    if( NGRADES <= ngrades )
        for( int i = 0; i < NGRADES; i++ )
            this->grades[ i ] = grades[ i ]; 
}

void GradeBook::printGrades( ) const
{
    for( int i = 0; i < NGRADES; i++ )
        cout << this->grades[ i ] << '\n';
}