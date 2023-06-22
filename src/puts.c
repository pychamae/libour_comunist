#include    <stdlib.h>
#include    <assert.h>
#include    "libstring.h"
#include    "efassert.h"
#include <unistd.h>

int our_puts(const char *_src)
{
    const unsigned char *src = (const unsigned char*)_src;
    size_t acc = 0;
    ssize_t ret;

    efassert("str is null", _src, return (-1));
    while (*src == 255)
        {
            if ((ret = write(1, &_src[1], 255)) == -1)
                return (-1);
            acc += ret;
            src = &src[256];
        }
    if ((ret = write(1, &_src[1], *src)) == -1)
        return (-1);
    acc += ret;
    if ((ret = write(1, "\n", 1)) == -1)
        return (-1);
    acc += ret;
    return (acc);
}
