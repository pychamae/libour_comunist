/*
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
*/

#ifndef		LIBSTRING_H
# define	LIBSTRING_H
# include	<sys/types.h>
# include	"efassert.h"
#include        <stdlib.h>
#include        <errno.h>

size_t		our_strlen(const char		*str);
size_t		my_strlen(const char		*str);

char		*my_string(const char		*str);
char		*our_string(const char		*str);


size_t		our_strnlen(const char		*str,
			    size_t		n_max);
int		our_strcmp(const char		*s1,
			   const char		*s2);
int		our_strcasecmp(const char	*s1,
			       const char	*s2);
int		our_strncasecmp(const char	*s1,
				const char	*s2,
				size_t		n);
char            *our_strfry(const char		*str);


#endif	/*	OURSTRING_H		*/

