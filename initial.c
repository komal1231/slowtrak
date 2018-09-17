what is a program?
A very simplistic takes input from the user, computes "something", outputs the result.
  
  
why is c necessary?
  C is the language used in embedded systems and system level programs like Operating Systems.
  Linux is written using C.
  
what is int actully used for?
  
What is int?
  Int is a builtin data type.
  What is a data type?
  A datatype specifies the type of a variable.
  What is a variable?
  A variable stores values.
  What are values.
  Values can be numbers - integers, floacting point number ( real numbers), characters - Simple values.
                          20, 2.2, 'c'.
  Why did put single quotes for 'c'.
    
  
What is it used for?
  look above.
what is a compiler?
  A c compiler is a program which takes a C program file and creates a exectuble program file. 
What is a file.
  A file is where we store information.
  Files are used for permanent retention of data. Computers store files on secondary
storage devices, especially disk storage devices. 
     
  
where do we type a programme?
  In the editor, ide, or in onlinegdb.
why is semicolon used after every statement?
  End of statement. It is syntax.
  What is syntax. 
  Syntax are the punction marks used the compiler.
  Also Human beings after they understand the syntax.
  
how can i run c programme?
  gcc tst.c
  ./a.out
  online gdb click on run.
what rules are to be followed to write a programme?
  What ever the compiler accepts. What are the rules called.
  Syntaxs.
how to end a program?
   THe program ends where the main ends.
why should two open brackets be used after main?
   1. Main is a function.
   2. All functions take parameters surrounded by paranthesis. ( )
   3. It is the syntax of function.
when we use printf,why should we put everything under double quotations?
   doubles quotes are used to denote strings to the compiler.
   main is function name  "main" string literal.
  main()
{
   printf("main");
}
what is stdio.h? 
  It is a a system header file stored in /usr/include.
  The header file contains prototypes for functions.
  Compilers use function prototypes to check if the right type and right number of parmeter are passed by the calling function to the called function
  For example.
    Calling function is main.
    Called function is printf
    the prototype of printf is in stdio.h.
why should we start with #include<stdio.h> ?
    Read above.
wy should we only use return 0 ?
    What ever main function return goes to the shell from which the program is invoked.
    This values is used to verify if the program ran successfully.
    In link 0 means success
    and any other values means failure.
      


