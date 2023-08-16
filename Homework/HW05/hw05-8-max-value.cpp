#include <stdio.h>

int main()
{
    int n1,n2,n3;
    printf("Input Number [n1 n2 n3] :");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("1st Number = %d\n",n1);  printf("2nd Number = %d\n",n2);  printf("3rd Number = %d\n",n3);
    if(n1 > n2 && n1 > n3) printf("The 1rd Number is the greatest among three");
    if(n2 > n1 && n2 > n3) printf("The 2rd Number is the greatest among three");
    if(n3 > n2 && n3 > n1) printf("The 3rd Number is the greatest among three");
    return 0;
}