#include <iostream>
#include <windows.h>
#include "include/getFolder.h"
#include "include/listFiles.h"
#include "include/filesInf.h"
#include "include/listFileTwo.h"
#include "include/filesInfTwo.h"
#include "include/removeFile.h"
#include "include/startDC.h"

using namespace std;

int main(){
    string location = currentFolder();
    listFiles(location);
    string locationFn = (location+"/UNREAL3/BINARIES/WIN32");
    int funcInf = funcC();
    string locTw = (locationFn);
    //cout << locTw << "/LaunchPad.exe" << endl;
    //starDc(locTw+"/LaunchPad.exe");

    //string lauch = (locTw+"/LaunchPad.exe");
    int result = system("start LaunchPad.exe");

    if(funcInf == 1){
        cout << "Location: Ok ;D" << endl;

        listFileTw(locTw);

        int lmfn = funcCTwo();

         cout << "Click in Play, in Dc launcher one time.. after press any key here:" << "\n" << endl;
         system("PAUSE");
         int rem = removeFileFunc(locTw+"/LAUNCHMEFIRST.EXE");

         if(rem == 1){
            cout << "Good, click play again, and have a good time." << endl;
            system("PAUSE");
         }else{
             cout << "Failed to find the file, you have to click play once before pressing any key." << endl;
             system("PAUSE");
     }

    }else{
        cout << "Error: Please move file to location of game" << endl;
        system("PAUSE");
        return 0;
    }
}
