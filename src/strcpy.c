#include    <stdlib.h>
#include    <assert.h>
#include    "libstring.h"
#include    "efassert.h"

char *our_strcpy(char *dst, const char *src)
{
    efassert("Invalid parameters",dst != NULL && src != NULL, errno = EFAULT;return NULL);
    size_t size = our_strlen(src);
    size_t taille = size + (size/255) +1 ;
    size_t i = 0 ; 
    
        while(i < taille)
        {
            dst[i] = src[i];
            i
        }   
    return dst;
}
