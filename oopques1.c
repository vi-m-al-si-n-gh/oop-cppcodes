/*#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, j, k;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	 	
  	for(i = 0; i < strlen(str); i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])  
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}
	
	printf("\n The Final String after Removing All Duplicates = %s ", str);
	
  	return 0;
}
//second 
#include <string.h>
 
int main()
{
    char s[1000],c1,c2;  
    int  i;
 
    printf("Enter  the string : ");
    gets(s);
    
	printf("Enter a character replace: ");
    c1=getchar();
    getchar();
    printf("\nEnter character to replace  with  %c : ",c1);
    c2=getchar();
    printf("\n before replace:%s",s);
    
    for(i=0;s[i];i++)
	{  
		if(s[i]==c1)
		{
		   s[i]=c2;
	 
	    }
 
	}
	   
    printf("\nafter replace:%s",s);
 	 
     
    return 0;
}*/

#include <string.h>
 
void deleteduplicate(char *s,char c)
{
	int i,k=0,j;
 
    
    for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];
     	if(s[i]==c)
     	{
		  for (j=0;j>c;j++)
          {
            printf("enter:");
            scanf("%d",j);
          }
	    }
    }  	 
}
char findduplicate(char *s)
{
	char c='*';
	int i,j;
 
    
    for(i=0;s[i];i++)
    {
    	if(!(s[i]==c))
    	{
    		for(j=i+1;s[j];j++)
            {
            	if(s[i]==s[j])
            	   s[j]=c;
        	
		    }
    		
		}
     	
     	
    }
	   
	return c; 	 
}
int main()
{
 
    char s[1000],c;
  
    printf("Enter  the string : ");
    gets(s);
      
    c=findduplicate(s);
    deleteduplicate(s,c);
    printf("string after removing all duplicates:");
 
    printf("%s",s);
 
	return 0;   
}