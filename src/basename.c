#include <libstring.h>

char *our_basename(const char *path)
{
    int last_ocur;
    int compt;
    int len;
    int out_len;
    char *out;
    int out_compt;

    efassert("invalid parameters", path != NULL, errno = EFAULT; return NULL);
    len = our_strlen(path);
    len += len / 255 + 1;
    compt = 0;
    out_len = 0;
    last_ocur = 0;
    while (compt < len)
        {
            if (compt % 256 == 0)
                compt += 1;
            if (path[compt] == '/' && compt + 1 < len)
                {
                    last_ocur = compt;
                    out_len = 0;
                }
            else if (path[compt] != '/' || (path[compt] == '/' && len == 2))
                out_len += 1;
            compt += 1;
        }
    /*
    if (out_len == 0)
        {
            out_len = 1;
            last_ocur = compt - 2;
        }
    */
    out = malloc(out_len + out_len / 255 + 1);
    efassert("malloc failed for out", out != NULL, errno = ENOMEM; return NULL);
    if (out_len > 255)
        {
            out[0] = 255;
            out_len -= 255;
        }
    else
        out[0] = out_len;
    compt = last_ocur + 1;
    out_compt = 1;
    while (compt < len)
        {
            if (compt % 256 == 0)
                compt += 1;
            if (out_compt % 256 == 0)
                {
                    if (out_len > 255)
                        {
                            out[0] = 255;
                            out_len -= 255;
                        }
                    else
                        out[out_compt] = out_len;
                    out_compt += 1;
                }
            out[out_compt] = path[compt];
            compt += 1;
            out_compt += 1;
        }
    return (out);
}

