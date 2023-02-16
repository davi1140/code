#include < stdio .h >
#include < stdlib .h >

 int main ( int argc , char * * argv ){
 // check if both input and output file names are given
 if ([ blank 1]){
	printf (" Need both input and output file names \n ");
 return EXIT_FAILURE ;
 }
 FILE * infile = fopen ( argv [1] , " r ");
 if ( infile [ blank 2]) { // check if fopen fail
	return EXIT_FAILURE ;
 }
 FILE * outfile = fopen ( argv [2] , " w ");
 if ( outfile [ blank 3]) { // check if fopen fail
	return EXIT_FAILURE ;
 }
 int count = 0;
 int val = 0;
 int rt = 0;
 // read an integer and assign it to val
 while ( fscanf ( infile , "% d ", [ blank 4]) == 1){
	count ++;
	rt = fprintf ( outfile , "% d \ n " , val );
	if ( rt < 1){
	    return EXIT_FAILURE ;
    }
 }
 printf (" The file has % d integers .\ n " , count ); // [ - - - ANSWER D - - -]

 // close the input file
 [ blank 5]

 // close the output file
 ...

 return EXIT_SUCCESS ;
 }

