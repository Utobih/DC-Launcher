#ifndef GETFOLDER_H
#define GETFOLDER_H

#include <iostream>
#include <stdio.h>
#include <dirent.h>

std::string currentFolder(){
    char* cwd = _getcwd( 0, 0 );
    std::string working_directory(cwd);
    std::free(cwd);
    return working_directory;
}
#endif
