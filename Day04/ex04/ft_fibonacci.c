#include <stdio.h>
int ft_fibonacci_iterative(int index)
{
    int count;
    count = 0;
    int first_value = 0;
    int sec_value = 1;
    int index_value = 1;

    if (index == 0)
        return (first_value);
    else if (index == 1)
        return (sec_value);
    else
    {
        index = index - 3;
        while (index >= count)
        {
        first_value = sec_value;
        sec_value = index_value;
        index_value = sec_value + first_value;
        count++; 
        }
        return(index_value);    

    }
    
}

int ft_fibonacci_recursive(int index)
{
    if (index > 1)
        return(ft_fibonacci_recursive(index - 1) + ft_fibonacci_recursive(index - 2));
    else if (index == 1)
         return(1);
    else 
        return(0);
} 

int ft_fibonacci_array(int index)
{
    if (index == 0)
        return (0); 
    else if (index == 1)
        return (1);
    else 
    { 
        int fib_arr[index];
        int i = 2;
        fib_arr[0] = 0;
        fib_arr[1] = 1;
        while (index >= i)
        {
            fib_arr[i] = fib_arr[i - 2] + fib_arr[i - 1];
            i++;
        }
        return (fib_arr[i - 1]);
    }
}

int main()
{
    // all indexs start from ZERO
    int index_of_mine = 6;
    printf("%d : iterative value \n" , ft_fibonacci_iterative(index_of_mine));
    printf("%d : Recursive value \n", ft_fibonacci_recursive(index_of_mine));
    printf("%d : Array value \n", ft_fibonacci_array(index_of_mine));
    return (0);
}