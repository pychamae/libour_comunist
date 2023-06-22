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

#include	<stdlib.h>
#include	<assert.h>
#include	<sys/types.h>

size_t		our_strlen(const char	*str);

// Exemple de tentative de crack de la fonction our_strlen

int		main(void)
{
  char		buffer[257];

  for (size_t i = 1; i < 256; ++i)
    buffer[i] = 'x';
  buffer[0] = 255; // taille du premier segment
  buffer[256] = 0; // taille du second segment
  assert(our_strlen(buffer) == 255); // Et ca, vous y avez pensé?
  return (EXIT_SUCCESS);
}

