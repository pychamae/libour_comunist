#include		<stdlib.h>
#include		<assert.h>
#include		"libstring.h"

int			main(void)
{
  assert(our_strnlen(our_string("abc"), 1) == 1);
  assert(our_strnlen(our_string("abc\0def"), 10) == 3);
  assert(our_strnlen(our_string(""), 0) == 0);
  assert(our_strnlen(NULL, 10) == 0);
  assert(our_strnlen(our_string(
			       "01234567890123456789012345678901234567890123456789"
			       "01234567890123456789012345678901234567890123456789"
			       "01234567890123456789012345678901234567890123456789"
			       "01234567890123456789012345678901234567890123456789"
			       "01234567890123456789012345678901234567890123456789"
			       "01234567890123456789012345678901234567890123456789"
			       ), 260) == 260);
  assert(our_strnlen(our_string("abc"), -18) == 3);
}
