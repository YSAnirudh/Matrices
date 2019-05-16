#include <stdio.h>
#include <stdlib.h>

int** create_matrix(int** m, int rows,int cols) {
	*m = (int*)malloc(sizeof(int)*rows);
//	*res = (int*)malloc(sizeof(int)*rows);

	for (int i = 0; i < cols; i++) {
		m[i] = (int*)malloc(sizeof(int)*cols);
	}
	return m;
}

void delete_matrix(int** matrix) {
	free(matrix);
	return;
}

int main() {
	int rows, cols;
	printf("Enter rows: ");
	scanf_s("%d", &rows);
	printf("Enter cols: ");
	scanf_s("%d", &cols);

	int* m1 = new int;
	create_matrix(m1, rows, cols);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			*(m1[i] + j) = 1;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%d", *(m1[i] + j));
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}