#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int aaaaaaaa, bbbbbbbb, xxxxxxxx, yyyyyyyy;
   printf("Enter aaaaaaaa:");
   scanf("%d", &aaaaaaaa);
   printf("Enter bbbbbbbb:");
   scanf("%d", &bbbbbbbb);
   printf("%d\n", aaaaaaaa + bbbbbbbb);
   printf("%d\n", aaaaaaaa - bbbbbbbb);
   printf("%d\n", aaaaaaaa * bbbbbbbb);
   printf("%d\n", aaaaaaaa / bbbbbbbb);
   printf("%d\n", aaaaaaaa % bbbbbbbb);
   xxxxxxxx = (aaaaaaaa - bbbbbbbb) * 10 + (aaaaaaaa + bbbbbbbb) / 10;
   yyyyyyyy = xxxxxxxx + (xxxxxxxx % 10);
   printf("%d\n", xxxxxxxx);
   printf("%d\n", yyyyyyyy);
   system("pause");
    return 0;
}
