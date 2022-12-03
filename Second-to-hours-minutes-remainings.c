
#include <stdio.h>

int main()
{int seconds,hours,minutes;

printf("Numarul de secunde: ");
scanf("%d",&seconds);
hours=seconds/3600;
minutes=seconds-3600;
minutes=400/60;
seconds=(4000-3600)% 60;
printf("%d Ore %d Minute %d Secunde ",hours,minutes,seconds);


return 0;
}
   

