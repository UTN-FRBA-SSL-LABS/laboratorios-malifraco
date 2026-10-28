#include "Conversion.h"

/*
 * Conversion.c — Implementacion de operaciones de conversion
 *
 * REGLA: no usar atoi, strtol ni ninguna funcion estandar de conversion
 */

/* ── ToInteger ──────────────────────────────────────────────────────────── */

int ToInteger(const char *s) {
    int signo     = 1;
    int resultado = 0;
    if (*s == '-') { signo = -1; s++; }
    for (; *s != '\0'; s++)
        resultado = resultado * 10 + (*s - '0');
    return signo * resultado;
}

/* ── Operacion libre ─────────────────────────────────────────────────────── */

int IsValidInteger(const char *s) {
    if (*s == '-') s++;
    if (*s == '\0') return 0;
    for (; *s != '\0'; s++)
        if (*s < '0' || *s > '9')
            return 0;
    return 1;
}
