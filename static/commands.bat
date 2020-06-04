::=====================================================
::  STATIC LINKING                                  ::
::=====================================================

:: CRATING THE OBJECT FILE
gcc -c complex_no.c -o complex_no.o

:: ARCHIVING THE OBJECT FILE
ar -rcs libcomplex_no.a complex_no.o

:: LINKING THE LIBRARY WITH THE PROGRAM
gcc main.c -L ./ -lcomplex_no -o complex
