#include<stdio.h>
#include<dirent.h>
#include <cstring>

int main(void)
{
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
			if (strncmp(dir->d_name + strlen(dir->d_name) - 4, ".txt", 4) == 0) {
                printf("%s\n", dir->d_name);
            }
		}
        closedir(d);
    }
    return(0);
}

/*
//  DIR *p;
//  struct dirent *pp;     
  p = opendir ("./");

  if (p != NULL)
  {
    while ((pp = readdir (p))!=NULL) {
      int length = strlen(pp->d_name);
      if (strncmp(pp->d_name + length - 4, ".txt", 4) == 0) {
          puts (pp->d_name);
      }
    }

    (void) closedir (p);
  }

#include <string>
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

int main() {
    std::string path = "./";
    for (const auto & entry : fs::directory_iterator(path))
        std::cout << entry.path() << std::endl;
}
*/