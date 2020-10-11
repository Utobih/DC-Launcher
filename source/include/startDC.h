#ifndef STARTDC_H
#define STARTDC_H

#include <windows.h>
#include <iostream>

int starDc(std::string prog){

    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    ZeroMemory( &si, sizeof(si) );
    si.cb = sizeof(si);
    ZeroMemory( &pi, sizeof(pi) );

    //CreateProcess(prog.c_str(),NULL,NULL, NULL,FALSE, 0,NULL,NULL,&si,&pi);
   // CreateProcess(NULL, prog.c_str(), NULL, NULL,NULL, FALSE, NULL, NULL, NULL, &si, &pi);

}//main

#endif // STARTDC_H
