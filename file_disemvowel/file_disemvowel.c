#include <stdlib.h>
#include <stdio.h>

//Returns 1 if input character is a vowel
int is_vowel( char c){
  int result;
  if ( c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' ||  c == 'i' ||        c == 'O' ||  c == 'o' ||  c == 'U' ||  c == 'u'){
    result = 1;
  }
  else { 
    result = 0;
  }
  return result;
}

//Main disemvowel method
void disemvowel(int argc, char *argv[]){
  //read file, write to standard output
  if (argc == 1){
    FILE *file = fopen( arg[0], "r");
    int x;
    while ( ( x = fgetc( file ) ) != EOF ){
      if (is_vowel(%c) == 0){
	
      }
    }
  }
  //read file, write to file
  else if(argc == 2){
    
  }
  //read standard input, write to standard output?
  else{

  }
}
