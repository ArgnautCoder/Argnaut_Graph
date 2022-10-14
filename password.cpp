#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>
void password();
void main()
{
 clrscr();
 password();
 getch();
 }
 void password()
 {char ch[80];
 char ayu[80]="ayushsingh";
 printf("\nENTER THE PASSWORD TO VIST AYUSH SINGH'S WORLD ");
 gets(ch);
 if(strcmp(ch,ayu)==0)
{
 printf("\n\n\n\n\n\t\t\tWELCOME TO THE WORLD OF AYUSH SINGH ");
 clrscr();
 gotoxy(1,12);
 printf("\t\t\t\tLOADING CODE......\n");
 delay(2500);
 printf("\n\t\t\t\tPLEASE WAIT......\n");
 gotoxy(1,20);
 for (int i=0;i<16;i++)
  {
    delay(500);
    printf("²²²²²");
  }
  clrscr();
      }
      else
      { printf("\n YOU HAVE ENTERED WRONG PASSWORD ");

       }
 }
