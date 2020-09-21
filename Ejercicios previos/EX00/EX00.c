#include <stdio.h>
#include <stdarg.h>
/*Pon aquí los includes que necesites*/
/*Función a desarrollar*/
int sumall(int nb, ...)
{
	int			res;

	res = 0;
	va_list listn;
	va_start(listn, nb);
	while(nb)
	{
		res += va_arg(listn, int);
		nb--;
	}
	va_end(listn);
	return (res);
}

int main(void)
{
	/*Test que ha de superar tu función*/
	printf("Basic test\n------\n");
	printf("Expected: %d\nObtained: %d\n------\n", 4, sumall(1, 4));
	printf("Expected: %d\nObtained: %d\n------\n", 4 -3, sumall(2, 4, -3));
	printf("Expected: %d\nObtained: %d\n------\n", 4 + 5 + 6 + -3, sumall(4, 4, 5, 6, -3));
	printf("Expected: %d\nObtained: %d\n------\n", 4 - 90, sumall(2, 4, -90, 45, -3));
	/*¿Es lo suficientemente robusta?*/
	printf("\nEXTRA\n-------\n");
	printf("Expected: %d\nObtained: %d\n------\n", 'c', sumall(1, 'c'));
	printf("Expected: %d\nObtained: %d\n------\n", 'b' + 'r', sumall(2, 'b', 'r'));
	printf("Expected: %d\nObtained: %d\n------\n", 4 + '5' + '6' + -3, sumall(4, 4, '5', '6', -3));
	printf("Expected: %d\nObtained: %d\n------\n", '^' - 90, sumall(2, '^', -90, 45, -3));
	return (0);
}
