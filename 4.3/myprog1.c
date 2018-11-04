#include<stdlib.h>
int main()
{
  system("mkdir dir1");
  
  system("touch dir1/file10");
  
  system("mkdir dir2");
  
  system("touch  dir2/file20");
  
  system("touch file1");
  
  system("ln -s dir2/file20 link1");
}