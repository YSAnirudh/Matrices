#include <stdio.h>

void print_arr(float**, int, int);            //1. prints input matrix
void diag_zero(float**, int, int);            //2. diagonal elements zero.
int determinant(float**, int, int, int, int); // finds det, doesnt print.
void print_det(float**, int, int);            //3. prints det of input matrix.
void transpose_switch(float**, int, int);     //4. changes input matrix to transpose.
void transpose_print(float**, int, int);      //5. prints transpose of matrix.
void adjoint(float**, int, int);              //6. changes input matrix to adjoint.
void adj_print(float**, int, int);            //7. prints adjoint of matrix.
void inverse_assign(float**, int, int);       //8. changes input matrix to inverse.
void inverse_print(float**, int, int);        //9. prints inverse of matrix.
void symmetric_check(float**, int, int);      //10. checks for symmetry.
void skew_symmetric_check(float**, int, int); //11. checks for skew symmetry.
void orthogonality_check(float**, int, int);  //12. checks for orthogonality.
void Transformation_Loop(float**, int, int);  //main loop taking commands from the user. TRANSFORMATIONS.
//void my_scan(float*, int, int); Not working at the moment.

int main() {
	int rows, cols;

	while (0 == 0) {
		printf("Please, Constrain your rows and columns from 1-3.\n");
		printf("Enter the no of rows in your matrix: ");
		scanf_s("%d", &rows);
		printf("Enter the no of columns in your matrix: ");
		scanf_s("%d", &cols);
		//if (rows <= 4 && cols <= 4 && rows > 0 && cols > 0) {  //trying to increase matrix size.
		if (rows <= 3 && cols <= 3 && rows > 0 && cols > 0) {
			break;
		}
	}
	//normal scan while loop.

	printf("\n");
	printf("Printing the matrix by selecting 1 after you find the matrix stops the Program.\nEntering anyother number while you have printed matrix through menu also stops the Program. ");
	printf("\n\n");

	//float row[4][4];
	float row1[4], row2[4], row3[4], row4[4]; // scan until 4x4 matrix. but use 3x3 as i havent programmed it for 4x4.
	float* arr[4] = { row1,row2,row3,row4 };
	printf("Enter the elements with a space b/w them and press Enter. For example, 1 1 1 , and Enter.\n");
	for (int k = 0; k < rows; k++) {
		switch (cols) {
		case 1:
			scanf_s("%f", arr[k]);
			break;
		case 2:
			scanf_s("%f %f", arr[k], arr[k] + 1);
			break;
		case 3:
			scanf_s("%f %f %f", arr[k], arr[k] + 1, arr[k] + 2);
			break;
		case 4:
			scanf_s("%f %f %f %f", arr[k], arr[k] + 1, arr[k] + 2, arr[k] + 3);
			break;
		default:
			break;
		}
	}

	

	/*if (rows == 1) {
		if (cols == 1) {
			scanf_s("%f", &row1[0]);
		}
		if (cols == 2) {
			scanf_s("%f %f", &row1[0], &row1[1]);
		}
		if (cols == 3) {
			scanf_s("%f %f %f", &row1[0], &row1[1], &row1[2]);
		}
		printf("\n");
	}
	if (rows == 2) {
		if (cols == 1) {
			scanf_s("%f", &row1[0]);
			scanf_s("%f", &row2[0]);
		}
		if (cols == 2) {
			scanf_s("%f %f", &row1[0], &row1[1]);
			scanf_s("%f %f", &row2[0], &row2[1]);
		}
		if (cols == 3) {
			scanf_s("%f %f %f", &row1[0], &row1[1], &row1[2]);
			scanf_s("%f %f %f", &row2[0], &row2[1], &row2[2]);
		}
		printf("\n");
	}
	if (rows == 3) {
		if (cols == 1) {
			scanf_s("%f", &row1[0]);
			scanf_s("%f", &row2[0]);
			scanf_s("%f", &row3[0]);
		}
		if (cols == 2) {
			scanf_s("%f %f", &row1[0], &row1[1]);
			scanf_s("%f %f", &row2[0], &row2[1]);
			scanf_s("%f %f", &row3[0], &row3[1]);
		}
		if (cols == 3) {
			scanf_s("%f %f %f", &row1[0], &row1[1], &row1[2]);
			scanf_s("%f %f %f", &row2[0], &row2[1], &row2[2]);
			scanf_s("%f %f %f", &row3[0], &row3[1], &row3[2]);
		}
		printf("\n");

	}*/
	//rows checks and scan.

	//float* arr[4] = { &row[0][4],&row[1][4],&row[2][4],&row[3][4]  };
	
	system("cls");

	Transformation_Loop(arr, rows, cols);

	printf("\n\n");

	printf("\n\n");
	system("pause");
	return 0;
}

//void my_scan(float* row,int rows, int col) {
//	switch (col) {
//	case 1:
//		scanf_s("%f", row[rows]);
//	case 2:
//		scanf_s("%f %f", row[rows], row[rows] + 1);
//	case 3:
//		scanf_s("%f %f %f", row[rows], row[rows] + 1, row[rows] + 2);
//	case 4:
//		scanf_s("%f %f %f %f", row[rows], row[rows] + 1, row[rows] + 2, row[rows] + 3);
//	default:
//		break;
//	}
//}

void Transformation_Loop(float** arr, int rows, int cols) {
	int while_run = 0, user_arg;
	while (while_run == 0) {
		printf("1. Prints the Matrix.\n");
		printf("2. Makes the Equal Indexed Elements Zero.\n");
		printf("3. Prints the Determinant value.\n");
		printf("4. Finds the Transpose of the Matrix.\n");
		printf("5. Transposes first and Prints the Matrix.\n");
		printf("6. Finds the Adjoint of the Matrix.\n");
		printf("7. Finds Adjoint first and Prints the Matrix.\n");
		printf("8. Finds the Inverse of the Matrix.\n");
		printf("9. Finds Inverse first and then Prints the Matrix.\n");
		printf("10. Checks for Symmetry of a Matrix.\n");
		printf("11. Checks for Skew Symmetry of a Matrix.\n");
		printf("12. Checks for Orthogonality of a Matrix.\n\n");

		printf("Please note, printing the matrix directly from the menu doesn't change the initial matrix you had.\nOnly finding the required operation and printing it changes the initial matrix. Even if printing is from the menu.\n\n");

		printf("Enter your Desired No.: ");
		scanf_s("%d", &user_arg);
		int u = 0;
		switch (user_arg) {
		case 1:
			system("cls");
			print_arr(arr, rows, cols);
			printf("Enter 0 to go back to the menu.\nAnyother no. to stop.");
			scanf_s("%d", &u);
			if (u != 0) {
				while_run = 1;
				break;
			}
			else {
				continue;
			}
		case 2:
			system("cls");
			diag_zero(arr, rows, cols);
			printf("Now Equal Indexed Elements are Zero.\n");
			u = 2;
			while (u != 0 && u != 1) {
				printf("Please\nEnter 1 to Print the Matrix.\n0 to go to the Menu.\nChanges have been made.\n");
				scanf_s("%d", &u);
			}
			if (u == 1) {
				print_arr(arr, rows, cols);
				while_run = 1;
				break;
			}
			else if (u == 0) {
				continue;
			}
			printf("\n");
		case 3:
			system("cls");
			print_det(arr, rows, cols);
			printf("Enter 0 to go back to the menu.\nAnyother no. to stop.");
			scanf_s("%d", &u);
			if (u != 0) {
				while_run = 1;
				break;
			}
			else {
				continue;
			}
		case 4:
			system("cls");
			transpose_switch(arr, rows, cols);
			printf("Matrix is Transposed.\n");
			u = 2;
			while (u != 0 && u != 1) {
				printf("Please\nEnter 1 to Print the Matrix.\n0 to go to the Menu.\nChanges have been made.\n");
				scanf_s("%d", &u);
			}
			if (u == 1) {
				print_arr(arr, rows, cols);
				while_run = 1;
				break;
			}
			else if (u == 0) {
				continue;
			}
			printf("\n");
		case 5:
			system("cls");
			printf("Transpose is:\n");
			transpose_print(arr, rows, cols);
			printf("Enter 0 to go back to the menu.\nAnyother no. to stop.");
			scanf_s("%d", &u);
			if (u != 0) {
				while_run = 1;
				break;
			}
			else {
				continue;
			}
		case 6:
			system("cls");
			adjoint(arr, rows, cols);
			printf("Adjoint is Found.\n");
			u = 2;
			while (u != 0 && u != 1) {
				printf("Please\nEnter 1 to Print the Matrix.\n0 to go to the Menu.\nChanges have been made.\n");
				scanf_s("%d", &u);
			}
			if (u == 1) {
				print_arr(arr, rows, cols);
				while_run = 1;
				break;
			}
			else if (u == 0) {
				continue;
			}
			printf("\n");
		case 7:
			system("cls");
			printf("Adjoint is:\n");
			adj_print(arr, rows, cols);
			printf("Enter 0 to go back to the menu.\nAnyother no. to stop.");
			scanf_s("%d", &u);
			if (u != 0) {
				while_run = 1;
				break;
			}
			else {
				continue;
			}
		case 8:
			system("cls");
			inverse_assign(arr, rows, cols);
			printf("Inverse is Found if inverse exists\n");
			u = 2;
			while (u != 0 && u != 1) {
				printf("Please\nEnter 1 to Print the Matrix.\n0 to go to the Menu.\nChanges have been made.\n");
				scanf_s("%d", &u);
			}
			if (u == 1) {
				print_arr(arr, rows, cols);
				while_run = 1;
				break;
			}
			else if (u == 0) {
				continue;
			}
			printf("\n");
		case 9:
			system("cls");
			printf("Inverse is:\n");
			inverse_print(arr, rows, cols);
			printf("Enter 0 to go back to the menu.\nAnyother no. to stop.");
			scanf_s("%d", &u);
			if (u != 0) {
				while_run = 1;
				break;
			}
			else {
				continue;
			}
		case 10:
			system("cls");
			symmetric_check(arr, rows, cols);
			u = 2;
			while (u != 0 && u != 1) {
				printf("Please\nEnter 1 to Print the Matrix.\n0 to go to the Menu.\nChanges have been made.\n");
				scanf_s("%d", &u);
			}
			if (u == 1) {
				print_arr(arr, rows, cols);
				while_run = 1;
				break;
			}
			else if (u == 0) {
				continue;
			}
			printf("\n");
		case 11:
			system("cls");
			skew_symmetric_check(arr, rows, cols);
			u = 2;
			while (u != 0 && u != 1) {
				printf("Please\nEnter 1 to Print the Matrix.\n0 to go to the Menu.\nChanges have been made.\n");
				scanf_s("%d", &u);
			}
			if (u == 1) {
				print_arr(arr, rows, cols);
				while_run = 1;
				break;
			}
			else if (u == 0) {
				continue;
			}
			printf("\n");
		case 12:
			system("cls");
			orthogonality_check(arr, rows, cols);
			u = 2;
			while (u != 0 && u != 1) {
				printf("Please\nEnter 1 to Print the Matrix.\n0 to go to the Menu.\nChanges have been made.\n");
				scanf_s("%d", &u);
			}
			if (u == 1) {
				print_arr(arr, rows, cols);
				while_run = 1;
				break;
			}
			else if (u == 0) {
				continue;
			}
			printf("\n");
		default:
			system("cls");
			printf("Enter a number from 1-12.");
				printf("\n");
			continue;
		}
	}
}

void inverse_print(float** two_d, int rows, int cols) {
	float det = (float)determinant(two_d, rows, cols, 0, 0);

	if (rows != cols || det == 0) {
		printf("inverse doesn't exist.\n");
		return;
	}

	if (rows == 1) {
		printf("%.1f\n", (*two_d[0]) / det);
		printf("\n");
	}

	if (rows == 2) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				if ((i + j) % 2 == 0) {
					printf("%.1f ", (*(two_d[(i + 1) % 2] + ((j + 1) % 2))) / det);
				}
				if ((i + j) % 2 == 1) {
					printf("%.1f ", -(*(two_d[(i + 1) % 2] + ((j + 1) % 2))) / det);
				}
			}
			printf("\n");
		}
		printf("\n");
	}

	if (rows == 3) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("%.1f ", (((*(two_d[(i + 1) % 3] + ((j + 1) % 3))) * (*(two_d[(i + 2) % 3] + ((j + 2) % 3)))) - ((*(two_d[(i + 1) % 3] + ((j + 2) % 3))) * (*(two_d[(i + 2) % 3] + ((j + 1) % 3))))) / det);
			}
			printf("\n");
		}
		printf("\n");
	}

	if (rows > 3) {
		printf("please enter 1-3 rows.");
	}
}

void print_det(float** two_d, int rows , int cols) {
	printf("The determinant is %d\n", determinant(two_d, rows, cols, 0, 0));

}

int determinant(float** two_d, int rows, int cols, int row_no, int col_no) {
	if (rows != cols) {
		printf("det doesn't exist.\n");
		return 2;
	}

	//float temp[10][10];

	/*for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			*(temp[i] + j) = *(two_d[i] + j);
		}
	}*/

	int part_sum;
	int sum = 0;

	if (rows == 1)
		return (int)two_d[0][0];

	if (rows == 2) {	
		for (int j = 0; j < cols; j++) {
			part_sum = (int)(*(two_d[0] + j))*(int)(*(two_d[1] + ((j + 1) % 2)));
			if (j % 2 == 1)
				part_sum = -part_sum;
			sum += part_sum;
		}
		return sum;
	}

	if (rows == 3) {
		for (int j = 0; j < cols; j++) {
			part_sum = (int)two_d[0][j] * (int)((two_d[1][(j + 1) % 3] * two_d[2][(j + 2) % 3]) - (two_d[1][(j + 2) % 3] * two_d[2][(j + 1) % 3]));
			if (j % 2 == 1) 
				part_sum = -part_sum;
			sum += part_sum;
		}
		return sum;
	}

	if (rows > 3) {
		printf("Please constrain ur rows and cols from 1-3");
		return 0;
	}

	//if (rows > 3) {
	//	if (row_no < 2) {
	//		for (int j = col_no; j < cols; j++) { //error line, j = 0, j < cols - col_no
	//			part_sum = (int)two_d[row_no][(j + col_no) % (cols - col_no)] * determinant(two_d, rows, cols, row_no + 1, (col_no + 1 + j) % cols);
	//			if ((row_no + j) % 2 == 1)
	//				part_sum = -part_sum;
	//			sum += part_sum;
	//		}
	//	}
	//	if (row_no >= 2) {
	//		sum = ((int)two_d[row_no][(col_no) % (cols)] * (int)two_d[row_no + 1][(col_no + 1) % (cols)]) - ((int)two_d[row_no + 1][(col_no) % (cols)] * (int)two_d[row_no][(col_no + 1) % (cols)]); 
	//	}
	//	return sum;
	//}

	//if (rows > 3) {
	//	
	//	for (int i = 0; i < rows - 1; i++) {
	//		for (int k = 0; k < cols; k++) {
	//			*(two_d[i + 1] + k) -= ((*(two_d[i + 1])) / (*(two_d[i]))) * (*(two_d[i] + k));
	//		}
	//	}
	//	for (int i = 0; i < rows; i++) {
	//		sum = sum * (int)(*(two_d[i] + i));
	//	}
	//	/*for (int i = 0; i < rows; i++) {
	//		for (int j = 0; j < cols; j++) {
	//			*(two_d[i] + j) = *(temp[i] + j);
	//		}
	//	}*/
	//	return sum;
	//}

	

	/*if (rows > 4) {
		printf("Please constrain the row and col length from 1-3\n");
		return 1;
	}*/
	return 0;
}

void adjoint(float** two_d, int rows, int cols) {
	if (rows != cols || rows < 1 || cols < 1)
		printf("adjoint is not defined.");

	if (rows == 2) {
		float temp1 = *two_d[0];
		*two_d[0] = *(two_d[1] + 1);
		*(two_d[1] + 1) = temp1;
		float temp2 = *two_d[1];
		*two_d[1] = -*(two_d[0] + 1);
		*(two_d[0] + 1) = -temp2;
		transpose_switch(two_d, rows, cols);
	}

	if (rows == 3) {
		float temp[3][3] = { 
		{*two_d[0],*(two_d[0] + 1),*(two_d[0] + 2) },
	    {*two_d[1],*(two_d[1] + 1),*(two_d[1] + 2) },
		{*two_d[2],*(two_d[2] + 1),*(two_d[2] + 2) }
		};

		/*for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				if ((i + j) % 2 == 0) {
					*(two_d[i] + j) = ((temp[(i + 1) % 3][(j + 1) % 3]) * (temp[(i + 2) % 3][(j + 2) % 3])) - ((temp[(i + 1) % 3][(j + 2) % 3]) * (temp[(i + 2) % 3][(j + 1) % 3]));
				}
				
				if ((i + j) % 2 == 1){
					*(two_d[i] + j) = (((temp[(i + 1) % 3][(j + 1) % 3]) * (temp[(i + 2) % 3][(j + 2) % 3])) - ((temp[(i + 1) % 3][(j + 2) % 3]) * (temp[(i + 2) % 3][(j + 1) % 3])));
				
				}
			}
		}*/

		for (int j = 0; j < cols; j++) {
			*(two_d[0] + j) = (*(two_d[1] + ((j + 1) % 3))* (*(two_d[2] + ((j + 2) % 3))) - (*(two_d[1] + ((j + 2) % 3))* (*(two_d[2] + ((j + 1) % 3)))));
		}

		for (int j = 0; j < cols; j++) {
			*(two_d[1] + j) = -((temp[0][(j + 1) % 3] * (*(two_d[2] + ((j + 2) % 3)))) - (temp[0][(j + 2) % 3] * (*(two_d[2] + ((j + 1) % 3)))));
		}

		for (int j = 0; j < cols; j++) {
			*(two_d[2] + j) = ((temp[0][(j + 1) % 3]) * (temp[1][(j + 2) % 3])) - ((temp[0][(j + 2) % 3]) * (temp[1][(j + 1) % 3]));
		}
		transpose_switch(two_d, rows, cols);
	}
}

void adj_print(float** two_d, int rows, int cols) {
	if (rows != cols) {
		printf("adjoint doesn't exist");
	}

	if (rows == 1) {
		printf("%.1f\n", *two_d[0]);
		printf("\n");
	}

	if (rows == 2) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				if ((i + j) % 2 == 0) {
					printf("%.1f ", *(two_d[(i + 1) % 2] + ((j + 1) % 2)));
				}
				if ((i + j) % 2 == 1) {
					printf("%.1f ", -*(two_d[(i + 1) % 2] + ((j + 1) % 2)));
				}
			}
			printf("\n");
		}
		printf("\n");
	}

	if (rows == 3) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("%.1f ", ((*(two_d[(i + 1) % 3] + ((j + 1) % 3))) * (*(two_d[(i + 2) % 3] + ((j + 2) % 3)))) - ((*(two_d[(i + 1) % 3] + ((j + 2) % 3))) * (*(two_d[(i + 2) % 3] + ((j + 1) % 3)))));
			}
			printf("\n");
		}
		printf("\n");
	}

	if (rows > 3) {
		printf("please enter 1-3 rows.");
	}
}

void inverse_assign(float** two_d, int rows, int cols) {
	if (determinant(two_d, rows, cols, 0, 0) == 0) {
		printf("Inverse doesnt exist.\n");
		return;
	}
	float det = (float)determinant(two_d, rows, cols, 0, 0);
	adjoint(two_d, rows, cols);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			*(two_d[i] + j) = (*(two_d[i] + j)) / det;
		}
	}
}

void orthogonality_check(float** two_d, int rows, int cols) {
	if (rows != cols) {
		printf("Not orthogonal. Not square matrix.\n");
		return;
	}
	float m_1[3][3];
	int count = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			m_1[i][j] = *(two_d[i] + j);
		}
	}
	
	transpose_switch(two_d, rows, cols);
	inverse_assign(two_d, rows, cols);
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (m_1[i][j] == *(two_d[i] + j)) {
				count++;
			}
		}
	}

	inverse_assign(two_d, rows, cols);
	transpose_switch(two_d, rows, cols);

	if (rows == 2) {
		if (count == 4 && determinant(two_d, rows, cols, 0, 0) != 0) {
			printf("The matrix is orthogonal.\n");
		}
		else {
			printf("The matrix is not orthogonal.\n");
		}
	}
	if (rows == 3) {
		if (count == 9 && determinant(two_d, rows, cols, 0, 0) != 0) {
			printf("The matrix is orthogonal.\n");
		}
		else {
			printf("The matrix is not orthogonal.\n");
		}
	}
}

void print_arr(float** two_d, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%.1f ", *(two_d[i] + j));
		}
		printf("\n");
	}
	printf("\n");
}

void diag_zero(float** two_d, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i == j) {
				*(two_d[i] + j) = 0;
			}
		}
	}
}

void transpose_switch(float** two_d, int rows, int cols) {
	float temp;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (j > i) {
				temp = *(two_d[i] + j);
				*(two_d[i] + j) = *(two_d[j] + i);
				*(two_d[j] + i) = temp;
			}

		}
	}
}

void transpose_print(float** two_d, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%.1f ", *(two_d[j] + i));
		}
		printf("\n");
	}
	printf("\n");
}

void symmetric_check(float** two_d, int rows, int cols){
	if (rows != cols) {
		printf("Not symmetric.");
		return;
	}
	float m_1[3][3];
	int count = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			m_1[i][j] = *(two_d[i] + j);
		}
	}

	transpose_switch(two_d, rows, cols);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (m_1[i][j] == *(two_d[i] + j)) {
				count++;
			}
		}
	}
	if (rows == 1) {
		if (count == 1) {
			printf("It is symmetric.\n");
		}
		else {
			printf("It is not symmetric.\n");
		}
	}
	if (rows == 2) {
		if (count == 4) {
			printf("It is symmetric.\n");
		}
		else {
			printf("it is not symmetric.\n");
		}
	}
	if (rows == 3) {
		if (count == 9) {
			printf("It is symmetric.\n");
		}
		else {
			printf("it is not symmetric.\n");
		}
	}
}

void skew_symmetric_check(float** two_d, int rows, int cols) {
	if (rows != cols) {
		printf("Not skew symmetric.");
		return;
	}
	float m_1[3][3];
	int count = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			m_1[i][j] = *(two_d[i] + j);
		}
	}

	transpose_switch(two_d, rows, cols);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (m_1[i][j] == -*(two_d[i] + j)) {
				count++;
			}
		}
	}
	if (rows == 1) {
		if (count == 1) {
			printf("It is skew symmetric.\n");
		}
		else {
			printf("It is not skew symmetric.\n");
		}
	}
	if (rows == 2) {
		if (count == 4) {
			printf("It is skew symmetric.\n");
		}
		else {
			printf("it is not skew symmetric.\n");
		}
	}
	if (rows == 3) {
		if (count == 9) {
			printf("It is skew symmetric.\n");
		}
		else {
			printf("it is not skew symmetric.\n");
		}
	}
}