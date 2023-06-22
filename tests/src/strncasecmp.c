#include	<stdlib.h>
#include	<assert.h>
#include	"libstring.h"
#include	<strings.h>
#include	<stdio.h>

int main(void)
{
  printf("pas content\n");
  printf("\n\nour : %d\n", our_strncasecmp(our_string("af"),our_string("arf"), 3));
  assert(our_strncasecmp(our_string("af"),our_string("arf"), 3) == strncasecmp("af", "arf", 3));
  assert(our_strncasecmp(our_string("arf"),our_string("arf"), 3) == 0);
  assert(our_strncasecmp(our_string("ARF"),our_string("arf"), 3) == 0);
  assert(our_strncasecmp(our_string("arf"), NULL, 3) == 1);
  assert(our_strncasecmp(NULL,our_string("arf"), 3) == 1);
  assert(our_strncasecmp(our_string("arf"),our_string("arf"), 0) == 0);
  assert(our_strncasecmp(our_string("arf"),our_string("arf"), 45) == 0);
  assert(our_strncasecmp(our_string("arfvcx"),our_string("arfty"), 3) == 0);
  assert(our_strncasecmp(our_string("arffzegryubezfuihhuifhugrhhgrezdfsvgisfd ilhuefzihuefzhiuzqefzefqhuareiguyfezruiyfdsisfdqfsdiuhfzeiuhrefgigrfiouyhgroiuhgeriuohfdersgiuvfdskjvfdsjbhdfsibhfreiuherfzuhirsgfoiurfuhizfeuhifezuihofezuhiqzefiuohfezqiuohefquihqsfeiuhfseiuhqfseiouhqsfeiuohqsfeiuhoqsfeioubsgdoibhgqseioujqsfgeiouhqsgfedbqsfeoiubqszfeoiuhqzfe"),our_string("arffzegryubezfuihhuifhugrhhgrezdfsvgisfd ilhuefzihuefzhiuzqefzefqhuareiguyfezruiyfdsisfdqfsdiuhfzeiuhrefgigrfiouyhgroiuhgeriuohfdersgiuvfdskjvfdsjbhdfsibhfreiuherfzuhirsgfoiurfuhizfeuhifezuihofezuhiqzefiuohfezqiuohefquihqsfeiuhfseiuhqfseiouhqsfeiuohqsfeiuhoqsfeioubsgdoibhgqseioujqsfgeiouhqsgfedbqsfeoiubqszfeoiuhqzfe"), 456) == 0);
  assert(our_strncasecmp(our_string("arffzegryubezfuihhuifhugrhhgrezdfsvgisfd ilhuefzihuefzhiuzqefzefqhuareiguyfezruiyfdsisfdqfsdiuhfzeiuhrefgigrfiouyhgroiuhgeriuohfdersgiuvfdskjvfdsjbhdfsibhfreiuherfzuhirsgfoiurfuhizfeuhifezuihofezuhiqzefiuohfezqiuohefquihqsfeiuhfseiuhqfseiouhqsfeiuohqsfeiuhoqsfeioubsgdoibhgqseioujqsfgeiouhqsgfedbqsfeoiubqszfeoiuhqzfe"),our_string("arffzegryubezfuihhuifhugrhhgrezdfsvgisfd ilhuefzihuefzhiuzqefzefqhuareiguyfezruiyfdsisfdqfsdiuhfzeiuhrefgigrfiouyhgroiuhgeriuohfdersgiuvfdskjvfdsjbhdfsibhfreiuherfzuhirsgfoiurfuhizfeuhifezuihofezuhiqzefiuohfezqiuohefquihqsfeiuhfseiuhqfseiouhqsfeiuohqsfeiuhoqsfeioubsgdoibhgqseioujqsfgeiouhqsgfedbqsfeoiubqszfeoiuhqzfe"), 300) == 0);

}
