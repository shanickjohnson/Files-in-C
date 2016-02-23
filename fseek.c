//
//
//  file manipulation
//
//  Created by Nicole Johnson  on 2/23/16.
//  Copyright © 2016 Nicole Johnson . All rights reserved.
//

#include <stdio.h>

//int fseek(FILE *stream, long int offset, int whence)
// stream -->  pointer to file object
// offsest --> This is the number of bytes to offset from whence
// whence --> This is the position from where offset is added
//            This is specified using the following constants
//              SEEK_SET -->	Beginning of file
//              SEEK_CUR -->	Current position of the file pointer
//              SEEK_END -->	End of file
int main ()
{
    FILE *fp;
    
    fp = fopen("file.txt","w+"); //create a file
    fputs("Welcome to Computer Science", fp);
    
    fseek( fp, 11, SEEK_SET );//file pointer was resetted and overwrote starting from the 11th posistion.
    fputs(" C Programming Language", fp);
    fclose(fp);
    
    return(0);
}