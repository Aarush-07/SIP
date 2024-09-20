#include <stdio.h>

int main()

{
   int mal,eng,mat,phy,chem,bio;
 printf("MALAYALAM:");
   scanf("%d",&mal);
   printf("ENGLISH:");
   scanf("%d",&eng);
 printf("MATHS:");
   scanf("%d",&mat);
    printf("PHYSICS:");
   scanf("%d",&phy);
    printf("CHEMESTRY:");
   scanf("%d",&chem);
    printf("BIOLOGY:");
   scanf("%d",&bio);
   float med,engg;
   med=bio+((phy+chem)/2.0);
   engg=mat+((phy+chem)/2.0);
   printf("MEDICAL CUTOFF=%.2f\n",med);
   printf("ENGENEERING CUTOFF=%.2f/n",engg);
   float total,perc,n=6;
   total=mal+eng+mat+phy+chem+bio;
   perc=total/n;
   printf("TOTAL MARKS=%.2f/n",total);
   printf("PERCENTAGE=%.2f/n",perc);
    return 0;
}
