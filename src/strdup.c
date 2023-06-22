#include    <stdlib.h>
#include    <assert.h>
#include    "libstring.h"
#include    "efassert.h"

/*
size_t find_size(char *s)
{
    size_t max ;
    size_t i ;

    max = 0 ;
    i= 0 ;
    if(our_strlen(s) == 255 || our_strlen(s) < 255)
        return our_strlen(s);
    if(our_strlen(s) > 255)
    {

    } 
}
*/

char *our_strdup(const char *s)
{
    efassert("Invalid parameters",s != NULL, errno = EFAULT; return NULL); 
    
    size_t tampon = our_strlen(s);
    size_t size = tampon + (tampon / 255 )+ 1;
    char * copie = malloc(size);
    efassert("malloc failure ",copie != NULL, errno = ENOMEM; return NULL);

    our_strcpy(copie,s);
    return copie ;  
}

