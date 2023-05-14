#include <hash.h>
#include <updef.h>
#include <stdio.h>

hash_t hash(void *_ptr, size_t size)
{
	byte_t *ptr = (byte_t *) _ptr;
	hash_t ret = 0;
	for (size_t i = 0 ; i < size ; i++)
		ret ^= ptr[i] << ((i % 8) << 3); 
	return ret;
}

hash_t hashcf(void *_ptr, size_t size, byte_t (*cf) (byte_t))
{
	byte_t *ptr = (byte_t *) _ptr;
	hash_t ret = 0;
	for (size_t i = 0 ; i < size ; i++)
		ret ^= cf(ptr[i]) << ((i % 8) << 3); 
	return ret;
}
