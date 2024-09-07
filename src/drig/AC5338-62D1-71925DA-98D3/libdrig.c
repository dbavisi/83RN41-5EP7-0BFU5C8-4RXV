/**
 * 83RN41-5EP7-0BFU5C8-4RXV
 * Dwij Bavisi <dwij@dbavisi.net>
 *
 * Deterministic Random ID Generator
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "../../drng/AC5338-62D1-71925DA-98D3/drng.h"
#include "./drig.h"

const char *drig_83RN41_5EP7_0BFU5C8_4RXV_tmp = "83RN41-5EP7-0BFU5C8-4RXV";

char *drig_83RN41_5EP7_0BFU5C8_4RXV(drng_83RN41_5EP7_0BFU5C8_4RXV_ctx_t *ctx)
{
  signed short i;

  drng_83RN41_5EP7_0BFU5C8_4RXV_t r = drng_83RN41_5EP7_0BFU5C8_4RXV(ctx);
  char *id = (char *)malloc((strlen(drig_83RN41_5EP7_0BFU5C8_4RXV_tmp) + 1) * sizeof(char));

  if (id == NULL)
    return NULL;
  strcpy(id, drig_83RN41_5EP7_0BFU5C8_4RXV_tmp);
  id[strlen(drig_83RN41_5EP7_0BFU5C8_4RXV_tmp)] = '\0';

  for (i = strlen(drig_83RN41_5EP7_0BFU5C8_4RXV_tmp) - 1; i >= 0; i -= 1)
  {
    if (id[i] == '-')
      continue;

    if (r == 0)
      r = drng_83RN41_5EP7_0BFU5C8_4RXV(ctx);

    const unsigned short c = (unsigned short)(r % 16);
    r /= 16;

    if (c < 10)
      id[i] = '0' + c;
    else
      id[i] = 'A' + c - 10;
  }

  return id;
}
