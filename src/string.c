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

#include	<string.h>
#include	"libstring.h"

static char	big_buffer[1024 * 1024 * 16];
static char	*data = &big_buffer[0];
static size_t	size;

static void	mark_alloc(void)
{
  memcpy(data, "\0\xFF\xAA\xFF", 4);
  data = &big_buffer[size += 4];
}

char		*my_string(const char *str)
{
  mark_alloc();
  char		*start = data;
  size_t	i;
	
  for (i = 0; str[i]; ++i)
    {
      start[i] = str[i];
      size += 1;
    }
  ((unsigned char*)start)[i] = 128 + i % 128;
  size += 1;
  data = &big_buffer[size];
  return (start);
}

  char		*our_string(const char *str)
  {
    mark_alloc();
    char	*start = data;
    char	*segment = &start[1];
    unsigned char *prevsiz = (unsigned char*)start;
    size_t	i;
	
    *prevsiz = 0;
    for (i = 0; str[i]; ++i)
      {
	size += 1;
	if (*prevsiz < 255)
	  segment[*prevsiz] = str[i];
	else
	  {
	    prevsiz = &prevsiz[256];
	    segment = (char*)&prevsiz[1];
	    *prevsiz = 0;
	    size += 1;
	    segment[*prevsiz] = str[i];
	  }
	*prevsiz += 1;
      }
    data = &big_buffer[size];
    return (start);
  }
