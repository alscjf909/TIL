#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){ 

    char name[50];

    int age;

    char sex;
	
	char *namep; 
	
	char *sArr[2]; //임시 저장소 생성
	

	while(1){
	printf("Provide your personal information\n");
    printf("Name :");
    scanf(" %[^\n]", name); //엔터키 말고 전부 입력 받음
	if(strcmp(name, "stop")==0) // stop이 나오면 중지시킴
	   break;
    printf("Age :");
    scanf(" %d", &age);
    printf("Sex(M/F) :");
    scanf(" %c", &sex);
		
    namep = strtok(name, " "); // 공백란 이전 문자열 뽑아내기
	sArr[0] = namep;
	namep = strtok(NULL, " "); // 공백란 이후 문자열 뽑아내기
	sArr[1] = namep;
	printf("Your name is %s %s, your age is %d, your sex is %c.\n",sArr[1],sArr[0],age,sex);



    }
	
	

	




    return 0;
}