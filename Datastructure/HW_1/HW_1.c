#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS   
int main(void) {
  int s1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int s2[10];

  for(int i=0; i<10;i++){
    printf("%d ,", s1[i]);
  }
  printf("\n");
  scanf("%d, %d, %d, %d, %d, %d, %d, %d,%d, %d",&s1[0], &s1[1], &s1[2],&s1[3], &s1[4],&s1[5], &s1[6],&s1[7], &s1[8],&s1[9]);
  
  for(int i=0; i<10;i++){
    printf("%d ,", s1[i]);
  }
  return 0;
}