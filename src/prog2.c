#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int aaaaaaaa, bbbbbbbb, cccccccc;
   printf("Enter aaaaaaaa:");
   scanf("%d", &aaaaaaaa);
   printf("Enter bbbbbbbb:");
   scanf("%d", &bbbbbbbb);
   printf("Enter cccccccc:");
   scanf("%d", &cccccccc);
   if ((aaaaaaaa > bbbbbbbb))
   {
   if ((aaaaaaaa > cccccccc))
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", cccccccc);
   goto OutofIF;
Abigger:
   printf("%d\n", aaaaaaaa);
   goto OutofIF;
   }
   }
   if ((bbbbbbbb < cccccccc))
   {
   printf("%d\n", cccccccc);
   }
   else
   {
   printf("%d\n", bbbbbbbb);
   }
OutofIF:
   if (((aaaaaaaa == bbbbbbbb) && (aaaaaaaa == cccccccc) && (bbbbbbbb == cccccccc)))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((aaaaaaaa < 0) || (bbbbbbbb < 0) || (cccccccc < 0)))
   {
   printf("%d\n", -1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if ((!(aaaaaaaa < (bbbbbbbb + cccccccc))))
   {
   printf("%d\n", (10));
   }
   else
   {
   printf("%d\n", (0));
   }
   system("pause");
    return 0;
}
