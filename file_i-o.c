#include<stdio.h>
main() 
{
 	FILE *fp,*nf;
	fp=fopen("fresh.txt","r"); 
    char Str[1000],c; 
    int i,j; 
    fscanf(fp,"%s",Str);
    for (i = 0; Str[i] != '\0'; ++i);  //calculating length of string
    for (j=0;j<i;j++)
	{
		printf("%c",Str[i-j-1]);       //printing reversed string
	}
	fclose(fp); 
    fp = fopen("fresh.txt", "r");  
    nf = fopen("new.txt", "w");  
    c = fgetc(fp);          //copy the element from on file to another 
    while (c != EOF) 
    { 
        fputc(c, nf); 
        c = fgetc(fp); 
    } 
    printf("\nContents copied to new.txt from fresh.txt"); 
    fclose(fp); 
    fclose(nf); 
    return 0; 
}
