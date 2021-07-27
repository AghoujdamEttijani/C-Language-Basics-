
#include<stdio.h>
int     ft_max_value(int *array, int size)
{
    int i;
    int max;

    i = 0;
    max = array[0];
    while(i < size - 1)
    {
        i++;
        if (max < array[i])
            max = array[i];
    }
    return (max);
}
int     main()
{
    int array[4] = {5, 10, 15, 8};
    printf("%d", ft_max_value(array, 4));

}