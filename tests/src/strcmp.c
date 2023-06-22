#include	<stdlib.h>
#include	<assert.h>
#include	"libstring.h"
#include	<stdio.h>

int		main(void)
{
  assert(our_strcmp(NULL, our_string("abc")) == -999);
  assert(our_strcmp(our_string("abc"), NULL) == -999);
  assert(our_strcmp(NULL, NULL) == -999);
  assert(our_strcmp(our_string("abc"), our_string("abc")) == 0);
  assert(our_strcmp(our_string("abc"), our_string("abcd")) == -'d');
  assert(our_strcmp(our_string("abcd"), our_string("abc")) == 'd');
  assert(our_strcmp(our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
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
  assert(our_strcmp(our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
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
  assert(our_strcmp(our_string("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
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
}
