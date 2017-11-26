#include <stdio.h>

void main()
{
 int dat[10]= {12, 34, 23, 45, 56, 21, 33, 39, 98, 76}; 
 int max= dat[0], min= dat[0], i, maxnum= 0, minnum= 0;

 for(i= 1; i < 10; i++)
 {
 if(dat[i] > max)
 {
 max= dat[i];
 maxnum= i;
 }

 if(dat[i] < min)
 {
 min= dat[i];
 minnum= i;
 }
 }

 i= dat[maxnum];
 dat[maxnum]= dat[minnum];
 dat[minnum]= i;

 for(i= 0; i < 10; i++)
 printf("%d\n", dat[i]);

}