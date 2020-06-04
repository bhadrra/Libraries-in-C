::=====================================================
::  DYNAMIC LINKING                                  ::
::=====================================================

:: CREATING A POSTION INDEPENT CODE OBJECT FILE
gcc -I -fPIC -c complex_no.c

:: CREATING THE DLL FROM THE OBJECT FILE
gcc -shared complex_no.c -o complex_no.dll

::  COMPILING THE MAIN PROGRAM TO OBJECT CODE
gcc -c main.c -o main.o

:: LINKING THE DLL AND THE OBJECT FILE
gcc main.o -L ./ -lcomplex_no -o complex