#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    while(1)
    {

        char site_name[50];
        printf("Enter the Site : ");
        scanf("%s",site_name);
        char type[50];
        printf("Enter type : ");
        scanf("%s",type);
        if(strcmp(type,"a")==0 || strcmp(type,"aaaa")==0 || strcmp(type,"cname")==0 || strcmp(type,"ns")==0 )
        {
            char command[1000]="nslookup -port=1234 -type=";
            strcat(command,type);
            strcat(command," ");
            strcat(command,site_name);
            strcat(command," 127.0.0.1");
            printf("%s\n",command);
            system(command);
        }
        else
            printf("UNAUTHORISED REQUEST\n");
    }
}