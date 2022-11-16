#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int	max(int numarg, ...);
void	print(char *placeholder, ...);

int	main()
{
	int n = max(4, 5, 7, 45, 100);
	printf("Max is : %d\n", n);
	print("fdddf", 10.5, 4, 5, 3, 5.6);
	
	return (0);
}

int	max(int numarg, ...)
{
	va_list	ptr;
	int	max;
	int	i;
	
	i = 0;
	max = 0;
	va_start(ptr, numarg);
	while (i < numarg)
	{
		int x = va_arg(ptr, int);
		if (i == 0)
			max = x;
		else if (x > max)
			max = x;
		i++;
	}
	return max;
}

void	print(char *placeholder, ...)
{
	va_list	ptr;
	int	i;
	int	numarg;
	
	i = 0;
	numarg = strlen(placeholder);
	va_start(ptr, placeholder);
	while (i < numarg)
	{
		if (placeholder[i] == 'd')
		{
			int n = va_arg(ptr, int);
			printf("%d\n", n);
		}	
		else if (placeholder[i] == 'f')
		{
			double n = va_arg(ptr, double);
			printf("%f\n", n);
		}
		i++;
	}
}

