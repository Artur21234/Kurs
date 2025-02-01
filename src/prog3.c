#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int aaaaaaaa, aaaaaaa2, bbbbbbbb, xxxxxxxx, ccccccc1, ccccccc2;
   printf("Enter aaaaaaaa:");
   scanf("%d", &aaaaaaaa);
   printf("Enter bbbbbbbb:");
   scanf("%d", &bbbbbbbb);
   for (int aaaaaaa2 = aaaaaaaa; aaaaaaa2 <= bbbbbbbb; aaaaaaa2++)
   printf("%d\n", aaaaaaa2 * aaaaaaa2);
   for (int aaaaaaa2 = bbbbbbbb; aaaaaaa2 <= aaaaaaaa; aaaaaaa2++)
   printf("%d\n", aaaaaaa2 * aaaaaaa2);
   xxxxxxxx = 0;
   ccccccc1 = 0;
   while (ccccccc1 < aaaaaaaa)
   {
   {
   ccccccc2 = 0;
   while (ccccccc2 < bbbbbbbb)
   {
   {
   xxxxxxxx = xxxxxxxx + 1;
   ccccccc2 = ccccccc2 + 1;
   }
   }
   ccccccc1 = ccccccc1 + 1;
   }
   }
   printf("%d\n", xxxxxxxx);
   xxxxxxxx = 0;
   ccccccc1 = 1;
   do
   {
   ccccccc2 = 1;
   do
   {
   xxxxxxxx = xxxxxxxx + 1;
   ccccccc2 = ccccccc2 + 1;
   }
   while (!(ccccccc2 > bbbbbbbb));
   ccccccc1 = ccccccc1 + 1;
   }
   while (!(ccccccc1 > aaaaaaaa));
   printf("%d\n", xxxxxxxx);
   system("pause");
    return 0;
}
