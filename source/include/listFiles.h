#ifndef LISTFILES_H
#define LISTFILES_H

#include <iostream>
#include <fstream>
#include <string.h>
#include <dirent.h>

using namespace std;

extern int listFiles(string loc){

    DIR *dir;
    struct dirent *lsdir;
    dir = opendir(loc.c_str());

    ofstream arquiv;
    ofstream arquivT;
    arquiv.open("files.txt",std::ios_base::app);
    arquivT.open("files.txt");
    arquivT << "";

    while ((lsdir = readdir(dir)) != NULL){
        arquiv << lsdir->d_name << "\n";
    }

    closedir(dir);
    arquiv.close();
    return 1;
}
#endif
