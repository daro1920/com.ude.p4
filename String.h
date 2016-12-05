#ifdef __cplusplus


#include <stdio.h>

#ifndef STRING_H
#define STRING_H

 const int MAX = 80;
 typedef char * string;

class String {
    private:
        string cadena;

        int strlen(string );
        void strcpy(string &s1,string &s2);
        void strcpy(string &s1,string const&s2);
        bool strcmp(string s1,string s2);
        void strcat(string &s1,string s2);

    public:
        String();
        // constructor por defecto.
        String(char* s);
        // constructor com�n
        String(const String &);
        // constructor de copia
        ~String();
        // destructor

        String operator=(const String &);
        // sobrecarga de asignaci�n
        bool operator==(String);
        // compara dos strings por igualdad.
        bool operator< (String);
        // compara dos strings alfab�ticamente
        String operator+ (String);
        // concatenaci�n de strings.
        void scan();
        // lee un string desde la entrada est�ndar.
        void print();
        // muestra un string en la salida est�ndar
};
 #endif


// �
#endif