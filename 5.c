#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
 char a[20];
int i,j=0;
FILE *f;
f=fopen("z.txt","r");
 while(fscanf(f,"%s",a)!=EOF){
  if(a[3]=='-'){
   printf("MOV R%d,%c\n",j,a[4]);
    printf("NEG R%d\n",j);
    j++;
}
 if(isalpha(a[3])){
    if(isdigit(a[4])){
        if(isdigit(a[5]=='+'))
            printf("ADD R%d,R%d,R%d\n",j,j-4,j-1);
  else if(a[5]=='-')
    printf("SUB R%d,R%d,R%d\n",j,j-4,j-1);
   else if(a[5]=='*')
  printf("MUL R%d,R%d,R%d\n",j,j-4,j-1);
     else if(a[5]=='/')
  printf("DIV R%d,R%d,R%d\n",j,j-4,j-1);
}
else {
 if(a[4]=='+')
{
printf("MOV R%d,%c\n",j++,a[3]);
printf("MOV R%d,%c\n",j++,a[5]);
printf("ADD R%d,R%d,R%d\n",j,j-2,j-1);
}
 if(a[4]=='-')
{
printf("MOV R%d,%c\n",j++,a[3]);
printf("MOV R%d,%c\n",j++,a[5]);
printf("SUB R%d,R%d,R%d\n",j,j-2,j-1);
}
else if(a[4]=='*'){
printf("MOV R%d,%c\n",j++,a[3]);
printf("MOV R%d,%c\n",j++,a[5]);
printf("MUL R%d,R%d,R%d\n",j,j-2,j-1);
}
else if(a[4]=='/'){
printf("MOV R%d,%c\n",j++,a[3]);
printf("MOV R%d,%c\n",j++,a[5]);
printf("DIV R%d,R%d,R%d\n",j,j-2,j-1);
}
j++;
}
}
if(isdigit(a[3])){
  printf("MOV %c,R%d\n",a[0],j);
}
}
return 0;
}
