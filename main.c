#include <stdio.h>
#include <stdlib.h>

struct Book{
	int number;
	char title[10];

};

void main(void){
	struct Book *p;
	
	p= malloc(2*(sizeof(struct Book)));


	if(p==NULL){
		printf("�޸� �Ҵ� ����\n");
		return ;
	}	
	p-> number=1;
	strcpy(p->title,"C programming");
	
	p-> number=2;
	strcpy((p+1)->title,"C programming");
	
	free(p);
	return ;

}
