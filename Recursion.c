#include<stdio.h>

// int sumOfNum(int);

// int main()
// {
//     int k;
//     k=sumOfNum(3);
//     printf("%d", k);
// }

// int sumOfNum(int num)
// {
//     int sum;

//     if(num==1)
//         return 1;
//     sum=num + sumOfNum(num-1);
//     return sum;

// }


int main()
{
    int m=2, n=4;
    int sum=0;

    for(int i=m; i<=n; i++)
        sum+=i;
    printf("%d", sum);


    return 0;
}

