#ifndef _HASH_H
#define _HASH_H

#include <updef.h>
#include <stddef.h>

typedef word_t hash_t;

hash_t hash(void *, size_t);
hash_t hashcf(void *, size_t, byte_t (*)(byte_t));

#endif
