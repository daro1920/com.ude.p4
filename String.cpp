#include "String.h"
 #include <iostream>
 #include "String.h"
 using namespace std;
 String :: String()
 {
cadena = new char[1];
cadena[0] = '\0';
 }
 //Devuelve el largo de un string.
int String :: strlen(char* s){
    int i=0;
    while (s[i] != '\0')
        i++;
    return (i);
}
 String :: String(char* s)
 {
int largo = strlen(s);
cadena = new char[largo+1];
strcpy(cadena,s);
 }
 String :: String(const String &otro)
 {
int largo = strlen(otro.cadena);
cadena = new char[largo+1];
strcpy(cadena,otro.cadena);
 }
void String :: strcpy (char* &s1,char* const&s2){
        int i=0;
        int largo= strlen(s2)+1;
        delete[] s1;
        s1= new char[largo];
        while (s2[i] != '\0'){
            s1[i]= s2[i];
            i++;
    }
    s1[i]= '\0';
}

 void String :: strcpy (char* &s1,char* &s2){
        int i=0;
        int largo= strlen(s2)+1;
        delete[] s1;
        s1= new char[largo];
        while (s2[i] != '\0'){
            s1[i]= s2[i];
            i++;
    }
    s1[i]= '\0';
}
 String :: ~String()
 {
delete [] cadena;
 }
 String String :: operator=(const String &otro)
 {
if (this != &otro)
{
 delete [] cadena;
 int largo = strlen(otro.cadena);
 cadena = new char[largo+1];
 strcpy(cadena,otro.cadena);
}
return (*this);
 }

 //Compara si dos strings son iguales.
bool String ::strcmp (char* s1,char* s2){
    int i=0;
    bool iguales=true;
    while (iguales && (s1[i]!='\0') && (s2[i]!='\0')){
        if (s1[i]!=s2[i]){
            iguales=false;
            }
    i++;
    }
    if ((s1[i]!='\0') || (s2[i]!='\0'))
        iguales=false;
    return iguales;
}
 bool String :: operator== (String otro)
 {
 return (bool) (strcmp(cadena,otro.cadena) == 0);
 }
 bool String :: operator< (String otro)
 {
 return (bool) (strcmp(cadena,otro.cadena) < 0);
 }
 String String :: operator+ (String otro)
 {
String aux;
int largo1 = strlen(cadena);
int largo2 = strlen(otro.cadena);
aux.cadena = new char [largo1 + largo2 + 1];
strcpy(aux.cadena,cadena);
strcat(aux.cadena,otro.cadena);
return aux;
 }
 void String :: strcat(char* &s1,char* s2){
    int i=strlen(s1);
    int j=0;
    int largo=strlen(s2);
    while ((i+j < MAX-1) && (j<largo)){
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
}
 void String :: scan()
 {
 char aux[MAX];
 char c = cin.get();
 int i=0;
 while (c!='\n' && i<MAX-1)
{
 aux[i] = c;
 i++;
 c = cin.get();
}
aux[i]='\0';
cadena = new char[i+1];
strcpy(cadena,aux);
 }
 void String :: print()
 {
 cout << cadena;
 }
