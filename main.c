#include <stdio.h>
#include <string.h>

int main(void)
{
  int i;
  char input[100];
  FILE* fp;
  
  fp = fopen("sample.txt","w");
  
  for(i=0;i<3;i++){
  printf("input a word:");
  scanf("%s",input); //배열은 &를 쓰지 않음. 
  fprintf(fp, "%s\n" , input);
}
  
  fclose(fp);
  system("PAUSE");	
  return 0;
}


