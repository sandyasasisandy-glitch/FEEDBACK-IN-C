#include<stdio.h>
int main()
{
  char ch;
  FILE*fp;
  fp=fopen("feedback.txt","W");
  if(fp==NULL)
  {
    printf("file opening failed\n");
    return 0;
  }
  fprintf(fp,"feedback about the c programming\n");
  fprintf(fp,"1.C language is usefull\n");
  fprintf(fp,"2.It is difficult to understand\n");
  fprintf(fp,"3.It is basic to all\n");
  fprintf(fp,"4.Because of biomaths student i can't understand c\n");
  fprintf(fp,"5.It takes more time to understand\n");
  fclose(fp);

  fp=fopen("feedback.txt","a");
  if(fp==NULL)
  {
    printf("file opening failed\n");
    return 0;
  }
  fprintf(fp,"feedback about the C-sir");
  fprintf(fp,"1.He teaches well\n");
  fprintf(fp,"2.His explanation was clear\n");
  fprintf(fp,"3.But i cant't understand his teaching\n");
  fprintf(fp,"4.Theoritical explanation was good but practical is quiet difficult to understand\n");
  fprintf(fp,"5.He is punctual and dedicated\n");
  fclose(fp);

  fp=fopen("feedback.txt","r");
  if(fp==NULL)
  {
    printf("file opening failed\n");
    return 0;
  }
  while((ch=fgetc(fp))!=EOF);
  {
    printf("%c",ch);
   }
   fclose(fp);
   return 0;
}