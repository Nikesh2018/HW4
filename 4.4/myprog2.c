#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>


main()
{
  int fd1;
  int dir1 = mkdir("dir1", 0777);
  chdir("dir1");
  fd1 = open ("file10", O_RDWR | O_CREAT, 0644);
  if (fd1<0){ perror("Error.");}
  close(fd1);
  
  chdir("..");

  int fd2;
  int dir2 = mkdir("dir2", 0777);
  chdir("dir2");
  fd2 = open ("file20", O_RDWR | O_CREAT, 0644);
  if (fd2<0){ perror("Error.");}
  close(fd2);
  
  chdir("..");

  int fd3;
  fd3 = open ("file1", O_RDWR | O_CREAT, 0644);
  if (fd3<0){ perror("Error.");}
  close(fd3);

  int link;
  link = symlink("dir2/file20","link1");
}
