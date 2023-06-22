/*
** Jason Brillante "Damdoshi" -------------------------------------------------
** Pentacle Technologie 2008-2023 ---------------------------------------------
** EFRITS SAS 2022-2023 -------------------------------------------------------
** Hanged Bunny Studio 2014-2021 ----------------------------------------------
** La Caverne aux Lapins Noirs ------------------------------------------------
** ----------------------------------------------------------------------------
** Our Lib --------------------------------------------------------------------
** ----------------------------------------------------------------------------
*/

#include	"libstring.h"

size_t		our_strnlen(const char	*_str,
			    size_t 	maxlen)
{
  const unsigned char *str = (const unsigned char*)_str;
  size_t	size = 0;

  efassert("invalid parameters", _str != NULL, errno = EFAULT; return 0;);
  while (*str == 255 && size <= maxlen)
  {
    size += *str;
    str = &str[256];
  }
  size += *str;
  if (size > maxlen)
    return(maxlen);
  return(size);
}

