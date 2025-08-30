/* 
    File: kernel.C

    Author: R. Bettati
            Department of Computer Science
            Texas A&M University

    Date  : 2017/05/25

    The "main()" function is the entry point for the kernel. 

*/



/*--------------------------------------------------------------------------*/
/* INCLUDES */
/*--------------------------------------------------------------------------*/

#include "simple_console.H"

using namespace std;

/* ======================================================================= */
/* MAIN -- THIS IS WHERE THE OS KERNEL WILL BE STARTED UP */
/* ======================================================================= */

int main()
{

  /* -- INITIALIZE CONSOLE */
  SimpleConsole::init(); 
  SimpleConsole::puts("Initialized console.\n");
  SimpleConsole::puts("\n");

  // SimpleConsole::puts("Replace the following <NAME> field with your name.\n");
  // SimpleConsole::puts("After your are done admiring your output, you can shutdown this 'machine'.\n");
  SimpleConsole::puts("\n");
  SimpleConsole::puts("WELCOME TO ");
  SimpleConsole::set_TextColor(LIGHT_BLUE, BLACK);
  SimpleConsole::puts("Tyler's ");
  SimpleConsole::set_TextColor(WHITE, BLACK);
  SimpleConsole::puts("KERNEL!\n");

  /* -- LOOP FOREVER! */
  for(;;);
  
}
