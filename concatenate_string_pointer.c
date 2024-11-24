#include<stdio.h>
#include<string.h>
#define MAX 100
void main()
{   int i,count=0;
    char *ptr[MAX],name[MAX]={'i','s','h','a',' ','n','e','g','i','\0'};
    char sentence[] =" is a student.";
    for(i=0;sentence[i]!='\0';i++)
    {  ptr[i]=&sentence[i];
       count++;
    }
     ptr[count]=&sentence[count];
     char array[count+1];

     for(i=0;i<=count;i++)
     { array[i]=*ptr[i];
      
    }
    strcat(name,array);
    printf("%s",name);
}
