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

size_t		my_strlen(const char	*_str)
{
  const unsigned char *str = (const unsigned char*)_str;
  size_t	i = 0;

  i = 0;
  efassert("str is null", str, return (0));
  while (str[i] < 128 || str[i] - 128 != (unsigned char)(i % 128))
    i += 1;
  return (i);
}

size_t		our_strlen(const char	*_str)
{
  const unsigned char *str = (const unsigned char*)_str;
  size_t	size = 0;

  efassert("str is null", str, return (0));
  while (*str == 255)
  {
	  size += *str;
	  str = &str[256];
  }
  return (size += *str);
}

