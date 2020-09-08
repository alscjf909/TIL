#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

int main() {
    
  char str1[80];  //insert string1
  char str2[80];  //insert string2
  int num_str1[80]; //
  int num_str2[80]; //
  const char s[5] = ",";
  char *token1;
  char *token2;


  int answer[20]={INT_MAX,};

  //INPUT
  printf("please insert 10 integer number series in ascending order twice\n");
  printf("Input 1 : ");
  scanf(" %[^\n]", str1);
  printf("Input 2 : ");
  scanf(" %[^\n]", str2);

  //converts a string to an integer
  //divide word on ","
  int index1=0;
  int index2=0;

  token1 = strtok(str1, s);
  while(token1 != NULL){
    num_str1[index1]=atoi(token1);
    token1 = strtok(NULL, s);
    index1++;
  }
  token2 = strtok(str2, s);
  while(token2 != NULL){
    num_str2[index2]=atoi(token2);
    token2 = strtok(NULL, s);
    index2++;
  }


  //ERROR We must inser total 20 numbers
  if((index1+index2) != 20){
    printf("ERROR : You should input 20 numbers in total");
    return 0;
  }

  //Set Dummy
  num_str1[index1]=INT_MAX;
  num_str2[index2]=INT_MAX;

  //reset
	index1=0;
  index2=0;
  int num=0; // Overlaped Number count

  int index3=-1; 
  //sort alogorithm
  while(!(num_str1[index1]==INT_MAX && num_str2[index2]==INT_MAX)){
    if(num_str1[index1]>num_str2[index2]){
      index3++;
      answer[index3]=num_str2[index2];
      index2++;
    }
    else if(num_str1[index1]<num_str2[index2]){
      index3++;
      answer[index3]=num_str1[index1];      
      index1++;
    }
    else if(num_str1[index1]==num_str2[index2]){
      index3++;
      answer[index3]=num_str1[index1];
      index1++;
      index2++;		
      num++;
    }
    
  }

  //ERROR
  
  for(int i=1;i<sizeof(answer)/sizeof(int)-num-1;i++){
    if(answer[i]<answer[i-1]){
      printf("ERROR : The input numbers are not in ascending order\n");
      return 0;
      
    }
  }
  printf("Output : ");
    for(int i=0;i<sizeof(answer)/sizeof(int);i++){
    if(answer[i] != INT_MAX && answer[i] != '\0')
      printf("%d, ", answer[i]);
    }

  return 0;

}
