#include		"libstring.h"
#include		<stdio.h>

static char		lower(const char		c)
{
  if (c >= 'A' && c <= 'Z')
    return(c + 32);
  return(c);
}

static int		search(const unsigned char	*s1,
			       const unsigned char	*s2,
			       int			len)
{
  int			i;

  i = 0;
  while (i < len)
    {
      if (lower(s1[i]) == lower(s2[i]))
	i += 1;
      else
	return (s1[i] - s2[i]);
    }
  return(0);
}

int			our_strncasecmp(const char	*s1,
					const char	*s2,
					size_t		n)
{
  unsigned char		*_s1;
  unsigned char		*_s2;
  int			status;
  size_t		size;
  int			size_segment;

  efassert("invalid parameters", s1 != NULL && s2 != NULL, errno = EFAULT; return -999;);
  _s1 = (unsigned char *)s1;
  _s2 = (unsigned char *)s2;
  size = 0;
  status = 0;
  while (*_s1 == 255 && *_s2 == 255 && size <= n)
    {
      size += 255;
      size_segment = n - size;
      if (size_segment > 255)
	size_segment = 255;
      status = search(&_s1[1], &_s2[1], size_segment);
      if (status != 0)
	return(status);
      _s1 = &_s1[256];
      _s2 = &_s2[256];
    }
  if (size >= n)
    return(status);
  if (*_s1 < *_s2)
    {
      size += *_s1;
      size_segment = n - size;
      if (size_segment > *_s1)
	size_segment = *_s1;
      status = search(&_s1[1], &_s2[1], size_segment);
      if (status == 0)
	return(-(_s2[*_s2]));
      return(status);
    }
  else if (*_s1 > *_s2)
    {
      size += *_s2;
      size_segment = n - size;
      if (size_segment > *_s2)
	size_segment = *_s2;
      status = search(&_s1[1], &_s2[1], size_segment);
      if (status == 0)
	  return(_s1[*_s1]);
      return(status);
    }
  else
    return(search(&_s1[1], &_s2[1], *_s1));
  return(0);
}
      
      
