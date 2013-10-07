#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    char buf[256];

    FILE *fin = fopen( "read.txt", "r" );
    if( !fin ) {
        printf( "Error in open read file!!\n" );
        return -1;
    }

    if( fgets( buf, 256, fin ) )
        printf( "Read: %s\n", buf );
    else
        printf( "Error : Can't get ant string!!\n" );

    fclose( fin );

    /******************************************************/

    char buf_write[] = "This is target\n";
    FILE *fout = fopen( "write.txt", "w" );
    if( !fout ) {
        printf( "Error in open write file!!\n" );
        return -1;
    }

    if( !fputs( buf_write, fout ) )
        printf( "Write host file successful!!\n" );
    else 
        printf( "Error : Can't write to file\n" );

    fclose( fout );

    return 0;
}
