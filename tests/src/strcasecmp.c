#include	<stdlib.h>
#include	<assert.h>
#include	"libstring.h"
#include	<stdio.h>

int		main(void)
{
  assert(our_strcasecmp(NULL, our_string("abc")) == -999);
  assert(our_strcasecmp(our_string("abc"), NULL) == -999);
  assert(our_strcasecmp(NULL, NULL) == -999);
  assert(our_strcasecmp(our_string("abc"), our_string("abc")) == 0);
  assert(our_strcasecmp(our_string("abc"), our_string("abcd")) == -'d');
  assert(our_strcasecmp(our_string("abcd"), our_string("abc")) == 'd');
  assert(our_strcasecmp(our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"),
		    our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc")) == 0);
  assert(our_strcasecmp(our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"),
		    our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcasfsfdsfsfbc")) == ('b' - 's'));
  assert(our_strcasecmp(our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcqdfsfsdqqfabcabc"),
		    our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc")) == ('q' - 'a'));

  
  assert(our_strcasecmp(NULL, our_string("Abc")) == -999);
  assert(our_strcasecmp(our_string("aBC"), NULL) == -999);
  assert(our_strcasecmp(NULL, NULL) == -999);
  assert(our_strcasecmp(our_string("aBC"), our_string("ABc")) == 0);
  assert(our_strcasecmp(our_string("abc"), our_string("Abcd")) == -'d');
  assert(our_strcasecmp(our_string("abcd"), our_string("ABC")) == 'd');
  assert(our_strcasecmp(our_string("ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"),
		    our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"
			       "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"
			       "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"
			       "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC")) == 0);
  assert(our_strcasecmp(our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"),
		    our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCASFSFDSFSFBC")) == ('b' - 's'));
  assert(our_strcasecmp(our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCQDFSFSDQQFABCABC"),
		    our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"
			       "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC")) == ('q' - 'a'));

}
