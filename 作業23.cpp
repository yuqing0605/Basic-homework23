#include<stdio.h>
#include<stdlib.h>

int main(void){

		FILE *fptr;
		char ch;
		fptr=fopen("data.txt","r");
		if(fptr!=NULL){
			
			while((ch=getc(fptr))!=EOF){   
				printf("%c", ch);
			}
			fclose(fptr);
		}
		else{
			printf("�ɮ׶}�ҥ���");
		}

		system("pause");
		return 0;
} 
