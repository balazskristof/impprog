/*
6. Írj egy függvényt, ami egy 3×3-as mátrixot transzponál!
https://media.geeksforgeeks.org/wp-content/cdn-uploads/matrix-transpose.jpg
*/
#include <stdio.h> // printf

void transzponalas(int matrix[3][3])
{
	int i, j, temp;
	for (i = 0; i < 3; i++)
	{
		for (j = i; j < 3; j++)
		{
			// egyszerû csere:
			temp = matrix[i][j]; // eltároljuk azt az értéket,
			matrix[i][j] = matrix[j][i]; // amit itt felülírunk,
			matrix[j][i] = temp; // hogy aztán befejezhessük a cserét
		}
	}
}

int main()
{
	int i;
	int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	printf("eredeti matrix:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d\t%d\t%d\n", matrix[i][0], matrix[i][1], matrix[i][2]);
	}
	
	transzponalas(matrix);
	
	printf("transzponalt matrix:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d\t%d\t%d\n", matrix[i][0], matrix[i][1], matrix[i][2]);
	}
	
	return 0;
}
