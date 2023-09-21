
#include <iostream>
using std::cout;

#include "GradeBook.h"
#include "GradeBook.cpp"

int main()
{
   cout << "Static Methods\n";
   cout << GradeBook::getnumAlunosEscola( ) << "\n\n";

   GradeBook gradebook0;
   GradeBook gradebook1( "Math" );
   const GradeBook GRADEBOOK2( "Physicssfdsfdsfgsgsdfgfgsdfgsdfgsdfdsfgsdfgfsadgf", 30 );
   GradeBook gradebook3( "Geography", 60 );
   GradeBook gradebook4( 20 );
   GradeBook gradebook5( GRADEBOOK2 ); //Constructor de cópia

   //ERROR: tentando usar método não const
   //GRADEBOOK5.setNumAlunos( 10 );

   //Variável pertence a classe
   cout << "\nTestando atributos e metodos statics.\n";
   cout << "Alunos que conseguiram vaga na escola " << GradeBook::getnumAlunosEscola( ) << '\n';
   cout << "Numero de GradeBooks instanciados: " << GradeBook::getnumGradeBooks( ) << '\n';
   cout << "Numero de GradeBooks instanciados: " << gradebook0.getnumGradeBooks( ) << "\n\n";

   gradebook0.printListaAlunos( );

   cout << "\nUsando arrays. Fornecendo e imprimindo notas.\n";
   const int NGRADES = 5;
   double grandes[ NGRADES ] = { 10.0, 8.9, 9.3, 7.8, 6.6 };

   gradebook3.fornecerNotas( grandes, NGRADES );
   gradebook3.printGrades( );
     
    
   return 0;
}