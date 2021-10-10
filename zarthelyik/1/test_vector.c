#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main(int argc, char* argv[])
{
    // a: append
    // r: retrieve    
    if (argc >= 2)
    {
        vector v;
        char op;
        int n;
        for (int i = 1; i < argc; i++)
        {
            if (i % 2 == 0) op = argv[i][0];
            else {
				n = atoi(argv[i]);
				if (i == 1) {
					printf("i %d\n", initialize(&v, n));
				}
				else {
					printf("%c ", op);
					switch(op)
					{
						case 'a':
							printf("%d\n", append(&v, n));
							break;
						case 'r':
							printf("%d\n", retrieve(v, n));
							break;
					}
				}
            }
        }
		dispose(&v);
    }
    return 0;
}