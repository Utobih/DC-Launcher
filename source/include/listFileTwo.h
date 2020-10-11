#ifndef LISTFILETWO_H
#define LISTFILETWO_H

#include <iostream>
#include <fstream>
#include <string.h>
#include <dirent.h>

using namespace std;

extern int listFileTw(string loct){

    DIR *dir2;
    struct dirent *lsdir2;
    dir2 = opendir(loct.c_str());
    int finishh;

    ofstream arquivv;
    ofstream arquivvT;
    arquivv.open("file.txt",std::ios_base::app);
    arquivvT.open("file.txt");
    arquivvT << "";

    while ((lsdir2 = readdir(dir2)) != NULL){
        arquivv << lsdir2->d_name << "\n";
    }

    closedir(dir2);
    arquivv.close();
    return 1;
}
#endif

