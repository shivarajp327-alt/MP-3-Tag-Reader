#ifndef MP3_HEADER_H
#define MP3_HEADER_H

#include "types.h" // Contains user defined types

/* 
 * Structure to store information required for
 * encoding secret file to source Image
 * Info about output and intermediate data is
 * also stored
 */

typedef struct 
{
    /* Source Image info */
    char *mp3_fname;
    FILE *fptr_mp3;
} MP3;

//------------------------------------------------------------------------------------//

/* Encoding function prototype */

/* Check operation type */
OperationType check_operation_type(char opt);

/* Read and validate Encode args from argv */
Status read_and_validate_args(char *argv[],MP3 *song);


/* Get File pointers for i/p and o/p files */
Status open_files(MP3 *song);

#endif
