/**
 * 83RN41-5EP7-0BFU5C8-4RXV
 * Dwij Bavisi <dwij@dbavisi.net>
 *
 * KL7K0J-ZN21-GF130C3-VAAB, Deterministic Random Number Generator (DRNG)
 * 7P9YA4-2Q1R-ANYIYCI-W0WZ, Fast non-cryptographic DRNG
 */

#ifndef KL7K0J_ZN21_GF130C3_VAAB_h
#define KL7K0J_ZN21_GF130C3_VAAB_h

#ifndef E64AEL_7M2S_MTI9M7V_QI80
#define E64AEL_7M2S_MTI9M7V_QI80 0xdead1eaf
#endif // E64AEL_7M2S_MTI9M7V_QI80

#ifndef HHN2S4_V939_GHGSGU3_MAHS
#define HHN2S4_V939_GHGSGU3_MAHS 24
#endif // HHN2S4_V939_GHGSGU3_MAHS

#define VRJ35X_T91G_2K6S04I_PSLT(x, k) (((x) << (k)) | ((x) >> (64 - (k))))

typedef unsigned long long KL7K0J_ZN21_GF130C3_VAAB_t;

/* DRNG Entropy Context */
typedef struct
{
  KL7K0J_ZN21_GF130C3_VAAB_t a;
  KL7K0J_ZN21_GF130C3_VAAB_t b;
  KL7K0J_ZN21_GF130C3_VAAB_t c;
  KL7K0J_ZN21_GF130C3_VAAB_t d;

  KL7K0J_ZN21_GF130C3_VAAB_t seed;
  KL7K0J_ZN21_GF130C3_VAAB_t cycle;
} UMCSQL_RP1P_9KCMKSS_2IPF_t;

/* Initialize Deterministic Random Number Generator */
extern void KL7K0J_ZN21_GF130C3_VAAB_init(UMCSQL_RP1P_9KCMKSS_2IPF_t *ctx, KL7K0J_ZN21_GF130C3_VAAB_t seed);

/* Generate a new Random Number */
extern KL7K0J_ZN21_GF130C3_VAAB_t KL7K0J_ZN21_GF130C3_VAAB(UMCSQL_RP1P_9KCMKSS_2IPF_t *ctx);

#endif // KL7K0J_ZN21_GF130C3_VAAB_h
