# Linking Libraries in C

## What are Libraries

[Library](https://en.wikipedia.org/wiki/Library_(computing)) is a collections of functions and structures __(collection of implementations of behavior)__ which are made so that we can use them again and again to avoid writing the whole functionality again.

## Linking

The process of combining the many source file and libraries together is called linking. It can be done in two ways:

* Dynamic
* Static

## Dynamic

In dynamic linking the reference to the functions are made i.e. the executable don't contain the library code.

## How to create a Dynamic Library

Create a source file and its header file.
Compile the source file to create a object file:

```shell
gcc -I <header_file_location> -fPIC -c <filename.c> -o <filename.o>
```

Here PIC stands for Position Indepepndent Code.
_If the header file is in current location leave the header_file_location empty._

Convert it to a dynamic link library(.dll)

```shell
gcc -shared <filename.o> -o <filename.dll>
```

## How to link to a dynamic library

```shell
gcc -I <header_file_location> -c <file.c> -o <file.o>
gcc <file.o> -L <library_location> -l<filename> -o <output_file>
```

## Static

In static linking the library code which is used in the program is copied into the output executable.

## How to create a static library

Create a source file and its header file.
Compile the source file to create a object file:

```shell
gcc -c <filename.c> -o <filename.o>
```

Archive a collection of those object files to make a .a lib file.

```shell
ar -rcs lib<archive_name> <files_to_archive>
```

* r - replace existing or insert new file(s) into the archive
* c - do not warn if the library had to be created
* s - create an archive index

_The archive name should start with lib._

## How to link to a static library

```shell
gcc <file.c> -L <library_location> -l<library_name> -o <output_file>
```

_\* all these commands are windows specific for other os the commands may vary but the steps are same_