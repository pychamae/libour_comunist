#include	<stdlib.h>
#include	<assert.h>
#include	<strings.h>
#include	"libstring.h"
#include	<stdio.h>

int		main(void)
{
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
				   "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCASFSFDSFSFBC")) ==
	 strcasecmp("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC",
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCASFSFDSFSFBC"));
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
				   "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC")) ==
	 strcasecmp("abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCQDFSFSDQQFABCABC",
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"
		    "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"
		    "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC"));

  assert(our_strcasecmp(our_string("aBC"), our_string("ABc")) == strcasecmp("aBC", "ABc"));
  assert(our_strcasecmp(our_string("abc"), our_string("Abcd")) == strcasecmp("abc", "abcd"));
  assert(our_strcasecmp(our_string("abcd"), our_string("ABC")) == strcasecmp("abcd", "ABC"));
  assert(our_strcasecmp(our_string("abcd"), our_string("AECD")) == strcasecmp("abcd", "AECD"));
}
