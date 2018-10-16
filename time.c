#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   struct tm t;
   t.tm_sec  = 19;
   t.tm_min  = 10;
   t.tm_hour = 10;
   t.tm_mday = 10;
   t.tm_mon  = 10;
   t.tm_year = 10;
   t.tm_wday = 6;
   printf("%s", asctime(&t));
}
