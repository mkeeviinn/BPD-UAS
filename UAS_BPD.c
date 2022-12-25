#include <stdio.h>
int main(void)
{
int nilai[10];
for (int i = 0; i < 10; i++)
{
scanf("%d",&nilai[i]);
}

for (int i = 0; i < 10; i++)
{
if(nilai[i] >= 60)
{
printf("\n%d",nilai[i]);
}
}
return 0;
}