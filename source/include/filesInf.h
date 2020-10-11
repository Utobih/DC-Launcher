#ifndef FILESINF_H
#define FILESINF_H

#include <iostream>

int funcC(){
    std::ifstream fileItens("files.txt");
    int ok = 0;

    for(std::string line; getline(fileItens, line);){
        if("LaunchPad.exe" == line){
            return 1;
        }
    }
    if(ok == 0){
        return 0;
    }
}
#endif
