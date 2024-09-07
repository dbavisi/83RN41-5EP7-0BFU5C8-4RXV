/**
 * 83RN41-5EP7-0BFU5C8-4RXV
 * Dwij Bavisi <dwij@dbavisi.net>
 *
 * Detrministic Random Number Generator
 */

#ifndef drng_83RN41_5EP7_0BFU5C8_4RXV_h
#define drng_83RN41_5EP7_0BFU5C8_4RXV_h

#ifndef drng_83RN41_5EP7_0BFU5C8_4RXV_seed
#define drng_83RN41_5EP7_0BFU5C8_4RXV_seed 0xdead1eaf
#endif // drng_83RN41_5EP7_0BFU5C8_4RXV_seed

#ifndef drng_83RN41_5EP7_0BFU5C8_4RXV_initcycles
#define drng_83RN41_5EP7_0BFU5C8_4RXV_initcycles 24
#endif // drng_83RN41_5EP7_0BFU5C8_4RXV_initcycles

#define drng_83RN41_5EP7_0BFU5C8_4RXV_rot(x, k) (((x) << (k)) | ((x) >> (64 - (k))))

typedef unsigned long long drng_83RN41_5EP7_0BFU5C8_4RXV_t;
typedef struct
{
  drng_83RN41_5EP7_0BFU5C8_4RXV_t a;
  drng_83RN41_5EP7_0BFU5C8_4RXV_t b;
  drng_83RN41_5EP7_0BFU5C8_4RXV_t c;
  drng_83RN41_5EP7_0BFU5C8_4RXV_t d;
} drng_83RN41_5EP7_0BFU5C8_4RXV_ctx_t;

/* Initialize Deterministic Random Number Generator */
extern void drng_83RN41_5EP7_0BFU5C8_4RXV_init(drng_83RN41_5EP7_0BFU5C8_4RXV_ctx_t *ctx, drng_83RN41_5EP7_0BFU5C8_4RXV_t seed);

/* Generate a new Random Number */
extern drng_83RN41_5EP7_0BFU5C8_4RXV_t drng_83RN41_5EP7_0BFU5C8_4RXV(drng_83RN41_5EP7_0BFU5C8_4RXV_ctx_t *ctx);

#endif // drng_83RN41_5EP7_0BFU5C8_4RXV_h
