#include <stdlib.h>
#include "vector.h"

/*
 * ALAPFELADAT
 */
int initialize(vector* v, int capacity)
{
    if (capacity <= 0) return 0;
    v->capacity = capacity;
    v->count = 0;
    v->elements = (int*)calloc(capacity, sizeof(int));
    return 1;
}
void dispose(vector* v)
{
    free(v->elements);
    v->count = 0;
    v->capacity = 0;
}
int append(vector* v, int e)
{
    if (v->count == v->capacity) return 0;
	v->elements[v->count] = e;
	v->count++;
	return 1;
}
int retrieve(vector v, unsigned int i)
{
    return v.elements[i];
}

/*
 * BESZÚRÁS ÉS TÖRLÉS
 */
int insert(vector* v, unsigned int i, int e)
{
	if (v->count < i || v->count == v->capacity) return 0;
	v->count++;
	for (int j = v->count - 1; j > i; j--) v->elements[j] = v->elements[j - 1];
	v->elements[i] = e;
	return 1;
}
int erase(vector* v, unsigned int i)
{
	if (v->count < i) return 0;
	v->count--;
	for (int j = i; j < v->count; j++) v->elements[j] = v->elements[j + 1];
	return 1;
}

/*
 * KAPACITÁSBŐVÍTÉS
 */
int set_capacity(vector* v, unsigned int c)
{
	if (c < v->count) return 0;
	v->capacity = c;
	int* new = (int*)calloc(c, sizeof(int));
	for (int i = 0; i < v->count; i++) new[i] = v->elements[i];
	free(v->elements);
	v->elements = new;
	return 1;
}
int safe_append(vector* v, int e)
{
	if (v->count < v->capacity || set_capacity(v, v->capacity * 2))
	{
		append(v, e);
		return 1;
	}
	return 0;
}
int safe_insert(vector* v, unsigned int i, int e)
{
	if (v->count < v->capacity || set_capacity(v, v->capacity * 2))
	{
		insert(v, i, e);
		return 1;
	}
	return 0;
}