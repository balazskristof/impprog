#ifndef VECTOR_H
#define VECTOR_H

/*
 * ALAPFELADAT
 */
#define VECTOR_TYPE int
typedef struct vector_t {
    unsigned int capacity;
    unsigned int count;
    VECTOR_TYPE* elements;
} vector;

int initialize(vector* v, int capacity);
void dispose(vector* v);
int append(vector* v, VECTOR_TYPE e);
int retrieve(vector v, unsigned int i);

/*
 * BESZÚRÁS ÉS TÖRLÉS
 */
int insert(vector* v, unsigned int i, VECTOR_TYPE e);
int erase(vector* v, unsigned int i);

/*
 * KAPACITÁSBŐVÍTÉS
 */
int set_capacity(vector* v, unsigned int c);
int safe_append(vector* v, VECTOR_TYPE e);
int safe_insert(vector* v, unsigned int i, VECTOR_TYPE e);
#endif