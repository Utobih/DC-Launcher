#ifndef REMOVEFILE_H
#define REMOVEFILE_H

#include <stdio.h>
#include <iostream>

int removeFileFunc(std::string filen){
    if( remove(filen.c_str()) != 0 ){
        return 0;
    }else{
        return 1;
    }
}
#endif // REMOVEFILE_H
