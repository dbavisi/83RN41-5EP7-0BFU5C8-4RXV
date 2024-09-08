/**
 * 83RN41-5EP7-0BFU5C8-4RXV
 * Dwij Bavisi <dwij@dbavisi.net>
 *
 * KL7K0J-ZN21-GF130C3-VAAB, Deterministic Random Number Generator (DRNG)
 * 7P9YA4-2Q1R-ANYIYCI-W0WZ, Fast non-cryptographic DRNG
 */

#include "./KL7K0J-ZN21-GF130C3-VAAB.h"

void KL7K0J_ZN21_GF130C3_VAAB_init(UMCSQL_RP1P_9KCMKSS_2IPF_t *ctx, const KL7K0J_ZN21_GF130C3_VAAB_t seed)
{
  KL7K0J_ZN21_GF130C3_VAAB_t UUXRWH_L27A_LKOUHHR_6W7V;
  const KL7K0J_ZN21_GF130C3_VAAB_t cycles = (KL7K0J_ZN21_GF130C3_VAAB_t)HHN2S4_V939_GHGSGU3_MAHS;

  ctx->a = (KL7K0J_ZN21_GF130C3_VAAB_t)E64AEL_7M2S_MTI9M7V_QI80;
  ctx->b = seed;
  ctx->c = seed;
  ctx->d = seed;

  ctx->seed = seed;
  ctx->cycle = 0;

  for (UUXRWH_L27A_LKOUHHR_6W7V = 0; UUXRWH_L27A_LKOUHHR_6W7V < cycles; UUXRWH_L27A_LKOUHHR_6W7V += 1)
    (void)KL7K0J_ZN21_GF130C3_VAAB(ctx);
}

KL7K0J_ZN21_GF130C3_VAAB_t KL7K0J_ZN21_GF130C3_VAAB(UMCSQL_RP1P_9KCMKSS_2IPF_t *ctx)
{
  const KL7K0J_ZN21_GF130C3_VAAB_t UUXRWH_L27A_LKOUHHR_6W7V = ctx->a - VRJ35X_T91G_2K6S04I_PSLT(ctx->b, 7);
  ctx->a = ctx->b ^ VRJ35X_T91G_2K6S04I_PSLT(ctx->c, 13);
  ctx->b = ctx->c + VRJ35X_T91G_2K6S04I_PSLT(ctx->d, 37);
  ctx->c = ctx->d + UUXRWH_L27A_LKOUHHR_6W7V;
  ctx->d = UUXRWH_L27A_LKOUHHR_6W7V + ctx->a;

  ctx->cycle += 1;
  return ctx->d;
}
