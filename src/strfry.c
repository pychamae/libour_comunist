#include <libstring.h>

char *our_strfry(const char *str)
{
    int compt;
    int size;
    int pos[2];
    char temp_c;

    efassert("invalid parameters", str != NULL, errno = EFAULT; return NULL);
    compt = 0;
    size = our_strlen(str);
    while (compt < size)
        {
            pos[0] = rand() % size;
            pos[1] = rand() % size;
            pos[0] += (pos[0] / 255) + 1;
            pos[1] += (pos[1] / 255) + 1;
            temp_c = pos[0];
            pos[0] = pos[1];
            pos[1] = temp_c;
            compt += 1;
        }
    return ((char *)str);
}

