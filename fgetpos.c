//
//  file position.c
//  file manipulation
//
//  Created by Nicole Johnson  on 2/23/16.
//  Copyright © 2016 Nicole Johnson . All rights reserved.
//

#include <stdio.h>


//It is also possible to receive the current position of a file and then either overwrite or continue to write data to a file
//In C the function int fgetpos(FILE *stream, fpos_t *position) gets the current file position of the stream and writes it to position.

//The following code will demonstrates how to use the functin fgetpos

//int main ()
//{
//    FILE *fp;
//    fpos_t position;
//    
//    fp = fopen("filetest.txt","w+");
//    fgetpos(fp, &position);
//    fputs("Hello, World!", fp);
//    
//    fsetpos(fp, &position);
//    fputs("Overwrite what was written", fp);
//    fclose(fp);
//    
//    return(0);
//}

int main ()
{
    FILE *fp;
    int c;
    int n = 0;
    
    fp = fopen("filetest.txt","r");
    
    while(1)
    {
        c = fgetc(fp);
        if( feof(fp) )
        {
            break ;
        }
        printf("%c", c);
    }
    
    fclose(fp);
    
    return(0);
}
