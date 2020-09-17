#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>    
#include <string.h> 
struct Person {   
  int number;
  char name[20];           
  int age;               
  int math;
  int english;
  int histroy;
};       
void insert(){
  

}
int main()
{
  struct Person data[100];

  FILE *fp = fopen("hello.txt", "r");  
  for(int i=0;i<100;i++){

    fscanf(fp,"%s %d %d %d %d", data[i].name, &data[i].age, &data[i].math, &data[i].english, &data[i].histroy); 
    if(data[i].age != 0){
    printf("%s %d %d %d %d\n", data[i].name, data[i].age, data[i].math, data[i].english, data[i].histroy);    
    }
    else
      break;

  }
  fclose(fp);    // 파일 포인터 닫기

  return 0;
}

