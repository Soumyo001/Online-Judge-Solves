#include<stdio.h>
typedef struct employee{
  char name[1000];
  int salary,hour;
}employee;
int main(void){
   employee em[10];
   for(int i=0;i<10;i++){
        fflush(stdin);
      gets(em[i].name);
      fflush(stdin);
      scanf("%d%d",em[i].salary,em[i].hour);
   }
   for(int i=0;i<10;i++){
    if(em[i].hour<=8) em[i].salary+=50;
    else if(em[i].hour<=10) em[i].salary+=100;
    else if(em[i].hour>=12) em[i].salary+=150;
   }
   for(int i=0;i<10;i++){
    puts(em[i].name);
    printf("\n");
    printf("%d\n%d",em[i].salary,em[i].hour);
   }
}
