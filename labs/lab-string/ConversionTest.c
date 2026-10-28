#include <assert.h>
#include "Conversion.h"

/*
 * ConversionTest.c — Pruebas del modulo Conversion
 *
 * Mismas restricciones que StringTest.c:
 * solo assert, literales, sin salida a stdout.
 */

int main(void) {

    /* ── ToInteger ──────────────────────────────────────────────────────── */
    assert(ToInteger("0") == 0);
    assert(ToInteger("1") == 1);
    assert(ToInteger("42") == 42);
    assert(ToInteger("-7") == -7);
    assert(ToInteger("100") == 100);

    /* ── IsValidInteger ─────────────────────────────────────────────────── */
    assert(IsValidInteger("0") == 1);
    assert(IsValidInteger("-42") == 1);
    assert(IsValidInteger("") == 0);
    assert(IsValidInteger("-") == 0);
    assert(IsValidInteger("12a") == 0);
    assert(IsValidInteger("+5") == 0);

    return 0;
}
