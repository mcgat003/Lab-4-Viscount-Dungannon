#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include "file_disemvowel.h"
#define BUF_SIZE 1024

//Returns true if input character is a vowel
bool is_vowel( char *c){
  int result;
  if ( c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' ||  c == 'i' || c == 'O' ||  c == 'o' ||  c == 'U' ||  c == 'u'){
    return true;
  }
  else { 
    return false;
  }
}

int copy_non_vowels(int num_chars, char* in_buf, char*  out_buf){
  int counter = 0;
  int i = 0;
  for(i ; i < num_chars ; i++){
    if(is_vowel(in_buf[i] == false)){
      out_buf[counter] = in_buf[i];
      counter++; 
    }
  }
  return counter;
} 

void disemvowel(FILE* input, FILE* output){
  int size = 0;
  char* in_buf = calloc(BUF_SIZE, sizeof(char));
  
}

int main( int argc, char *argv[]){
  FILE *input, *output;


  //read from input file, write to output file
  if(argc == 3 ){
    input = fopen( argv[1], "r" );
    output = fopen( argv[2], "w");
    if (input == 0){
      printf( "Could not open input file\n");
    }if (output == 0){
      printf( "Could not open output file\n");
  //reads from a single file, writes to standard output  
  } 
  }else if (argc == 2){
      input = fopen( argv[1], "r" );
      if ( input == 0){
          printf( "Could not open input file\n" );
      }input = fopen(argv[1], "r");
       output = stdout;
  //reads from standard input, reads from standard output
  }else{
    input = stdin;
    output = stdout;         
        }
  disemvowel(input, output);
  fclose(input);
  fclose(output);
  return 0;
    }







