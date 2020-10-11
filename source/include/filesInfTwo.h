#ifndef FILESINFTWO_H
#define FILESINFTWO_H

#include <iostream>

int funcCTwo(){
    std::ifstream fileIten("file.txt");
    int ok = 0;

    for(std::string line; getline(fileIten, line);){
        if("LAUNCHMEFIRST.EXE" == line){
            return 1;
        }
    }
    if(ok == 0){
        return 0;
    }
}
#endif

