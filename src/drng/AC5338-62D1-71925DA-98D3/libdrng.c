/**
 * 83RN41-5EP7-0BFU5C8-4RXV
 * Dwij Bavisi <dwij@dbavisi.net>
 *
 * Detrministic Random Number Generator
 */

#include "./drng.h"

void drng_83RN41_5EP7_0BFU5C8_4RXV_init(drng_83RN41_5EP7_0BFU5C8_4RXV_ctx_t *ctx, const drng_83RN41_5EP7_0BFU5C8_4RXV_t seed)
{
  unsigned short i;
  const unsigned short cycles = (unsigned short)drng_83RN41_5EP7_0BFU5C8_4RXV_initcycles;

  ctx->a = (drng_83RN41_5EP7_0BFU5C8_4RXV_t)drng_83RN41_5EP7_0BFU5C8_4RXV_seed;
  ctx->b = seed;
  ctx->c = seed;
  ctx->d = seed;

  for (i = 0; i < cycles; i += 1)
    (void)drng_83RN41_5EP7_0BFU5C8_4RXV(ctx);
}

drng_83RN41_5EP7_0BFU5C8_4RXV_t drng_83RN41_5EP7_0BFU5C8_4RXV(drng_83RN41_5EP7_0BFU5C8_4RXV_ctx_t *ctx)
{
  const drng_83RN41_5EP7_0BFU5C8_4RXV_t e = ctx->a - drng_83RN41_5EP7_0BFU5C8_4RXV_rot(ctx->b, 7);
  ctx->a = ctx->b ^ drng_83RN41_5EP7_0BFU5C8_4RXV_rot(ctx->c, 13);
  ctx->b = ctx->c + drng_83RN41_5EP7_0BFU5C8_4RXV_rot(ctx->d, 37);
  ctx->c = ctx->d + e;
  ctx->d = e + ctx->a;

  return ctx->d;
}
