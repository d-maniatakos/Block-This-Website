#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 200 //maximum size of characters a website url can have

int main(){
	FILE *hosts;    
	char website[MAX_SIZE];                   //Character array containing the url of the website to be blocked
	char *redirect_ip="\n0.0.0.0 ";
	
	while(1){
		hosts=fopen("C:\\Windows\\System32\\drivers\\etc\\hosts", "a");	
		
		//hosts pointer will be NULL if the file doesn't exist or if(more possibly) the running executable has no admin rights which "hosts" file needs to be modified
		if(hosts==NULL){      
			printf("Please Run As Administrator!\n");
			system("pause");
			return 0;
		}
		
		printf("Website URL: ");
		scanf("%s",&website);
		printf("\n");
			
		fputs(redirect_ip, hosts);
		fputs(website,hosts);
			
		fclose(hosts);
		
		while ((getchar()) != '\n');  //Clears Input Buffer
	} 
}
