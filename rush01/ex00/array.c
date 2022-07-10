
#include <stdio.h>

void	ft_builder(char *str, int arr[][4]);

void	ft_array(char *str)
{
	int	arr[4][4];

	ft_builder(str, arr);
	int i = 0;
	int j = 0;
	while (i < 4){
		while (j < 4){
			printf("%d " , arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
		j = 0;
	}
}