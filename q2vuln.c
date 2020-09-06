#include <unistd.h>
#include <string.h>
#include <stdio.h>

char str1[] = "Welcome! Please enter a name:\n";
char str2[] = "Good luck, \n";
char str3[] = "The secret phrase is \"squeamish ossifrage\"\n";
int main() {
  char name[128];
  print(str1);//write(1, str1, 30);
  read(0, name, 256);
  print(str2);//write(1, str2, 11);
  write(1, name, strlen(name));
}

void print(char * str){
  write(1, str, strlen(str));
}

void proof(){
  print(str3);
}
