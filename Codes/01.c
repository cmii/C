#include "base.h"

int main() {
    clear();
    // printf("Hello World");

    // gcc 01.c -> ./a.exe Run

    int num =25;
    char grade = 'C';
    float age = 20.105;
    // variable Naming rule
    /*
      Case Sensitive
      Meaningful 
      alphabets, numbers and underscore (not starting with digit)
      no space, one word -> one_word instead of 'one word'
      cannot use keywords
    */

   // single-line comment
   /* multi-line 
      comment */

    // File.c -> File.exe (By compiler)

    printf("%d %f\n%.2f %16f", 45, 34.0, 4.4533, 3.0);
	// we cannot change int to float or vice-versa

	// (C × 9/5) + 32 = F == C/5 = (F-32)/9



    return 0;
}