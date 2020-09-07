#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
    
  char str1[80];
  char str2[80];
  int num_str1[80];
  int num_str2[80];
  const char s[5] = ",";
  char *token1;


  int answer[20];

  //INPUT
  printf("please insert 10 integer number series in ascending order twice\n");
  scanf(" %[^\n]", str1);
  scanf(" %[^\n]", str2);


  //converts a string to an integer
  //divide word on "," 
  token1 = strtok(str1, s);

  int i,j,k = 0;
  while(token1 != NULL){

    token1 = strtok(NULL, s);

    i++;
  }
    printf("Input1 : %s\n",str1);
  printf("Input2 : %s\n",str2);/*
  i=0;
  while(num_str1[i] != '\0' && num_str2[j] != '\0'){
    if(num_str1[i]>num_str2[j]){
      answer[k]=num_str2[j];
      printf("%d",answer[k]);
      k++;
      j++;
    }
    else if(num_str1[i]<=num_str2[j]){
      answer[k]=num_str1[i];
      printf("%d",answer[k]);
      k++;
      i++;
    }
 for (i = 0; i < sizeof(answer) / sizeof(int); i++)    // 배열의 요소 개수만큼 반복
    {
        printf("%d\n", answer[i]);    // 배열의 인덱스에 반복문의 변수 i를 지정
    }
  }
  for(k=0;k<20;k++){
    printf("%d",answer[k]);
  }
  k=0;
  while(answer[k]=='\0'){
    k++;
    if(answer[k]<answer[k-1]){
      printf("The input numbers are not in ascending order");
      return 0;
    }
    if(i+j != 20){
      printf("You should input 20 numbers in total");
      return 0;
    }

  }*/



  return 0;

}
