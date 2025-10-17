#include "libft.h"


char    *ft_calloc(size_t count,size_t size)
{

    //allocation
    char *res=malloc(count * size);
    if(!res)
    {
        printf("doesn't work !");
    }

    ft_bzero(res,count);

    return res;
}

int main()
{
    char *callocation=ft_calloc(4,sizeof(char));

    int i =0;
    while(i < 4)
    {
        printf("%d \n",callocation[i]);
        i++;
    }
    

}