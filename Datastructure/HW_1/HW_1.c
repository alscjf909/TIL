#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<limits.h>

int main() {
    
  char str1[80];
  char str2[80];
  int num_str1[80];
  int num_str2[80];
  const char s[5] = ",";
  char *token1;
  char *token2;


  int answer[20]={INT_MAX,};

  //INPUT
  printf("please insert 10 integer number series in ascending order twice\n");
  printf("Input1 : ");
  scanf(" %[^\n]", str1);
  printf("Input2 : ");
  scanf(" %[^\n]", str2);

  //converts a string to an integer
  //divide word on ","
  int i=0;
  int j=0;
  int k=0; 
  token1 = strtok(str1, s);
  while(token1 != NULL){
    num_str1[i]=atoi(token1);
    token1 = strtok(NULL, s);
    i++;
  }
  token2 = strtok(str2, s);
  while(token2 != NULL){
    num_str2[j]=atoi(token2);
    token2 = strtok(NULL, s);
    j++;
  }
  //ERROR 
  if((i+j) != 20){
    printf("You should input 20 numbers in total");
    return 0;
  }


  //Set Dummy
  num_str1[i]=INT_MAX;
  num_str2[j]=INT_MAX;

  //reset
  i=0;
  j=0;


  //sort alogorithm
  while(!(num_str1[i]==INT_MAX && num_str2[j]==INT_MAX)){
    if(num_str1[i]>num_str2[j]){
      answer[k]=num_str2[j];
      k++;
      j++;
    }
    else if(num_str1[i]<num_str2[j]){
      answer[k]=num_str1[i];
      k++;
      i++;
    }
    else if(num_str1[i]==num_str2[j]){
      i++;
    }
    
  }

  //ERROR
  for(i=1;i<sizeof(answer)/sizeof(int)-1;i++){
    if(answer[i]<answer[i-1]){
      printf("The input numbers are not in ascending order\n");
      printf("i : %d",i);
      return 0;
    }
  }
    for(i=0;i<sizeof(answer)/sizeof(int);i++){
    if(answer[i] != INT_MAX && answer[i] != '\0')
      printf("%d\n", answer[i]);
    }
    




  return 0;

}
