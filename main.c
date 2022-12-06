#include <stdio.h>
#include <stdlib.h>

void main(void){
	char *pc  = NULL;
	int i=0;
	
	pc  = (char*)malloc(100*sizeof(char));
	//100byte가 heap영역에 할당된다. 
	//ㅣmalloc은 포인터변수가 필수 
	
	if(pc==NULL){
		printf("메모리 할당 오류\n");
		exit(1);
	}
	//error 핸들링 코드 
	
	for(i=0; i<26; i++){
		pc [i]='a'+i;
	
	}
	pc[i]=0;
	printf("%s\n",pc);
	free(pc);
	//반납 
}
