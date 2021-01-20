#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char str[] = "Necdet-Alperen-Ozil-Fenerbahce-Adana-iOS-Android"; 
  
    // Returns first token 
    char* word = strtok(str, "-"); 

    // Prints all words 
    while (word != NULL) { 
        printf("%s\n", word); 
        word = strtok(NULL, "-"); 
    } 
    return 0; 
} 