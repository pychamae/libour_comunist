#include		"libstring.h"
#include		<stdio.h>

static int		search(const char	*s1,
			       const char	*s2,
			       int		len)
{
  int			i;

  i = 0;
  while (i < len)
    {
      if (s1[i] == s2[i])
	i += 1;
      else if (s1[i] < s2[i])
	return (-1);
      else
	return (1);
    }
  return(0);
}

int			our_strcmp(const char	*s1,
				   const char	*s2)
{
  char			*_s1;
  char			*_s2;
  int			status;

  _s1 = s1;
  _s2 = s2;
  while (*_s1 == 255 && *_s2 == 255)
    {
      status = search(&_s1[1], &_s2[1], 255);
      if (status != 0)
	return(status);
      _s1 = &_s1[256];
      _s2 = &_s2[256];
    }
  if (*_s1 < *_s2)
    return(-1);
  else if (*_s1 > *_s2)
    return(1);
  else
    return(search(&_s1[1], &_s2[1], *_s1));
}
      
      
