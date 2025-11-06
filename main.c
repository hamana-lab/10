#include <stdio.h>
#include <string.h>

int main(void)
{
  char input[100];
  FILE* fp;
  char c; 
  
  fp = fopen("sample.txt","r"); //자체적으로 텍스트 파일을 만들고 거기에 쓰는 코드
   
  if(fp == NULL)
   printf("파일을 못열음\n");
   
    #if 0
  while((c = fgetc(fp))!= EOF){
   putchar(c);
  }
  #endif
  

  while(fgets(input,100,fp) > 0){
   printf("%s",input);
}


  
  fclose(fp);
  system("PAUSE");	
  return 0;
}


