/**
 * 83RN41-5EP7-0BFU5C8-4RXV
 * Dwij Bavisi <dwij@dbavisi.net>
 *
 * BCWHP9-B81X-HMH3QN3-E98M, Deterministic Random ID Generator (DRIG)
 * 97DRZM-VN2K-UG197FF-GSP0, Fast non-cryptographic DRIG
 */

#include <stdlib.h>

#include "../../KL7K0J-ZN21-GF130C3-VAAB/7P9YA4-2Q1R-ANYIYCI-W0WZ/KL7K0J-ZN21-GF130C3-VAAB.h"
#include "./BCWHP9-B81X-HMH3QN3-E98M.h"

const char *BCWHP9_B81X_HMH3QN3_E98M_tmp = "83RN41-5EP7-0BFU5C8-4RXV";

char *BCWHP9_B81X_HMH3QN3_E98M(UMCSQL_RP1P_9KCMKSS_2IPF_t *ctx)
{
  signed short UUXRWH_L27A_LKOUHHR_6W7V;
  unsigned short c;

  KL7K0J_ZN21_GF130C3_VAAB_t r = KL7K0J_ZN21_GF130C3_VAAB(ctx);
  char *id = (char *)malloc(25 * sizeof(char));

  if (id == NULL)
    return NULL;
  for (UUXRWH_L27A_LKOUHHR_6W7V = 0; UUXRWH_L27A_LKOUHHR_6W7V < 24; UUXRWH_L27A_LKOUHHR_6W7V += 1)
    id[UUXRWH_L27A_LKOUHHR_6W7V] = BCWHP9_B81X_HMH3QN3_E98M_tmp[UUXRWH_L27A_LKOUHHR_6W7V];
  id[24] = '\0';

  for (UUXRWH_L27A_LKOUHHR_6W7V = 23; UUXRWH_L27A_LKOUHHR_6W7V >= 0; UUXRWH_L27A_LKOUHHR_6W7V -= 1)
  {
    if (id[UUXRWH_L27A_LKOUHHR_6W7V] == '-')
      continue;

    if (r == 0)
      r = KL7K0J_ZN21_GF130C3_VAAB(ctx);

    c = (unsigned short)(r % 36);
    r /= 36;

    if (c < 10)
      id[UUXRWH_L27A_LKOUHHR_6W7V] = '0' + c;
    else
      id[UUXRWH_L27A_LKOUHHR_6W7V] = 'A' + c - 10;
  }

  return id;
}
