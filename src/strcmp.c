#include		"libstring.h"
#include		<stdio.h>

static int		search(const unsigned char	*s1,
			       const unsigned char	*s2,
			       int			len)
{
  int			i;

  i = 0;
  while (i < len)
    {
      if (s1[i] == s2[i])
	i += 1;
      else
	return (s1[i] - s2[i]);
    }
  return(0);
}

int			our_strcmp(const char		*s1,
				   const char		*s2)
{
  unsigned char		*_s1;
  unsigned char		*_s2;
  int			status;

  efassert("invalid parameters", s1 != NULL && s2 != NULL, errno = EFAULT; return -999;);
  _s1 = (unsigned char *)s1;
  _s2 = (unsigned char *)s2;
  while (*_s1 == 255 && *_s2 == 255)
    {
      status = search(&_s1[1], &_s2[1], 255);
      if (status != 0)
	return(status);
      _s1 = &_s1[256];
      _s2 = &_s2[256];
    }
  if (*_s1 < *_s2)
    {
      status = search(&_s1[1], &_s2[1], *_s1);
      if (status == 0)
	return(-(_s2[*_s2]));
      return(status);
    }
  else if (*_s1 > *_s2)
    {
      status = search(&_s1[1], &_s2[1], *_s2);
      if (status == 0)
	  return(_s1[*_s1]);
      return(status);
    }
  else
    return(search(&_s1[1], &_s2[1], *_s1));
  return(0);
}
      
      
