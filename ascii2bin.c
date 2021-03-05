/********************************/
/* Program Name:  ascii2bin.c   */
/* Author:        Codi Yost     */
/* Date:          03/02/2021    */
/********************************/
/* Description:                 */
/* Validation Checks:           */
/* Enhancements:                */
/********************************/

#include "stdio.h"
#include "stdlib.h"
#include <unistd.h>

#define max_int (255)
#define byte unsigned char


    /*
    # Assignment
        Your task is to develop a C program, called ascii2bin, that
            * reads a string of 1's and 0's as ASCII digits, and 
            * outputs the equivalent unsigned decimal number 
    */

   /*
        Your program must
            1. exercises the read() system call to read a single byte, at a time, from stdin
            2. validate that the read byte is appropriate for conversion, e.g., it must be either an ASCII '0' or '1'
            3. converts each byte into an integer value via a mathematical expression
            4. uses the resulting integer as part of the calcuation to determine the final number
            5. identifies the end of a input string by either end of file or by a new line
                5a  End of file is detected when read() returns the value '0'
                5b  A new line is identified in the ASCII table as either: newline, nl, LF, or \n'
            6. prints this final unsigned number on stdout
            7. returns a value of 0 upon success and 1 otherwise
    */

int main (int argc, char * argv[], char ** envp) {

    int offset = 30;
    int number = 0;
    char ascii_value;
    int retval = read(0, &ascii_value, 1);      /* 1. */
    printf("%i\n",retval);
    printf("ascii_value: %d\n", ascii_value);
    printf("first\n");
    
    while (retval == 1){
     
        int digit = (int)ascii_value - offset;
        printf("digit: %c\t", digit);
        number = (number << 1) + digit;
        printf("number: %i\n", number);  
        retval = read(0, &ascii_value, 1);
        printf("ascii_value: %d\n", ascii_value);
        printf("retval: %i\n", retval);
        printf("loop\n");

    }
    
    printf("%u\n", number);
    return 0;
}