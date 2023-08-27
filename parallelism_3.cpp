#include<windows.h>
#include<strsafe.h>

#define NUM_THREADS 10
#define BUF_SIZE 10

struct Package{
int threadID;
int number;
};

void displayMessage(HANDLE hScreen, int threadID, int number, const char *message){
// A character array
TCHAR message_buffer[BUF_SIZE];
size_t cchStringSize;
// DWORD is a windows-specific type (Unsigned 32-bit)
DWORD dwChars; //DWORD stands for double word. It's windows keyword and equivalent to 32-bit unsigned integer coming from windows.h

//printing using thread-safe functions
//print a string to the buffer and check to make sure it doesn't exceed length
StringCchPrintf(message_buffer, BUF_SIZE, TEXT("Printing number %d from thread %d. %s\n"),
                threadID,number,message);
// Check for a buffer overrun
StringCchLength(message_buffer, BUF_SIZE,&cchStringSize);
// write character string to console
WriteConsole(hScreen, message_buffer, cchStringSize,&dwChars,NULL);

//just put the thread to sleep for a little
Sleep(1000);


}

DWORD WINAPI boring_thread_function(LPVOID lpParam){
// cast our void pointer to our defined struct
Package local_package = *(Package*)lpParam;
// Get Handle to the screen
HANDLE hStdout=NULL;
hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

displayMessage(hStdout, local_package.threadID, local_package.number, "Hello, there");

return 0;
}


int main(){
    //array of handles. handles are like pointers(need to check this one!)
HANDLE array_of_handles[NUM_THREADS] {0};
Package packages[NUM_THREADS];

for(int i{0}; i<NUM_THREADS; ++i){
    packages[i].threadID = 0; // just the initialization
    packages[i].number = i*i; // just the initialization

    /*CreateThread Arguments

    1.security attribution(default)
    2.stack size(default)
    3.function
    4.Argument (Converted to void pointer)
    5.creation flag (0=run immediately after creation)
    6.pointer to variable to receive thread id

    */


    array_of_handles[i]=CreateThread(NULL,0,boring_thread_function,&packages[i],0,NULL);
}


return 0;
}
