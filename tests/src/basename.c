#include	<stdlib.h>
#include	<assert.h>
#include	"libstring.h"

int		main(void)
{
    assert(our_strcmp(our_basename(our_string("aze")), our_string("aze")) == 0);
    assert(our_strcmp(our_basename(our_string("dbdfb/sfvfv/ngreberbgerubigbergbubgf")), our_string("ngreberbgerubigbergbubgf")) == 0);
    assert(our_strcmp(our_basename(our_string("dbdfb/sfvfv/azeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcb")), our_string("azeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcbazeefsfgdfbbcb")) == 0);
    assert(our_strcmp(our_basename(our_string("/")), our_string("/")) == 0);
    assert(our_strcmp(our_basename(our_string(".")), our_string(".")) == 0);
    assert(our_strcmp(our_basename(our_string("..")), our_string("..")) == 0);
    assert(our_strcmp(our_basename(our_string("../thth")), our_string("thth")) == 0);
    assert(our_strcmp(our_basename(our_string("../thth/")), our_string("thth")) == 0);
    assert(our_basename(NULL) == NULL);
    assert(our_strcmp(our_basename(our_string("////")), our_string("")) == 0);
    return (EXIT_SUCCESS);
}
