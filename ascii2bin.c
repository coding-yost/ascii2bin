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


int main (int argc, char * argv[], char ** envp) {

    int offset = 0;
    int number = 0;
    int ascii_value;


/* reads a string of 1's and 0's as ASCII digits */
/* Exercise the read() system call to read a single byte, at a time from stdin */
    
    int retval = read(0, &ascii_value, 1);

/* validate that the read byte is appropriate for conversion */

   /* if (ascii_value <= 1){
        fprintf(stderr, "Input not in byte format.\n");
    }
    */
/* outputs the equivalent unsigned decimal number */


}