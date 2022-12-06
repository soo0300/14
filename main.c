#include <stdio.h>
#include <stdlib.h>

struct Book{
	int number;
	char title[10];

};

void main(void){
	int i;
	struct Book **bookshelf; 
	//이중배열형상화 
	
	//한줄에 10개 책이 있고 3줄이 있는 형태 
	bookshelf = malloc(3*sizeof(struct Book*)); 
	for(i==0; i<3; i++){
		bookshelf[i]=malloc(10*sizeof(struct Book)); //구조체 자체
	}
	bookshelf[1][3].number =5;
	strcpy(bookshelf[1][3].title,"C++ Programming");
	
	(bookshelf[2]+4)->number=3; 
	// same as == bookshlef[2][4].number=5;
	strcpy(bookshelf[2]+4)->title,"Communications Theory");
	 
	printf("book(1,3):%i,%s\n",(bookshelf[1][3].number,bookshelf[1][3].title));
	printf("book(2,4):%i,%s\n",(bookshelf[2]+4->number,(bookshelf[2]+4)->title);
	
	
	for(i==0; i<3; i++){
		free(bookshelf[i]);			
	}
	free(bookshlef);
	
	return ; 

}
