#include	<stdlib.h>
#include	<assert.h>
#include	"libstring.h"

int		main(void)
{
  assert(our_strcmp(our_string("abc"), our_string("abc")) == 0);
  assert(our_strcmp(our_string("abc"), our_string("abcd")) == -1);
  assert(our_strcmp(our_string("abcd"), our_string("abc")) == 1);
  assert(our_strcmp(our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"),
		    our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc")) == 0);
  assert(our_strcmp(our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"),
		    our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcasfsfdsfsfbc")) == -1);
  assert(our_strcmp(our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcqdfsfsdqqfabcabc"),
		    our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
			       "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc")) == 1);
}