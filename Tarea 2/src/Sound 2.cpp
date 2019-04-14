#include <windows.h> 
#include <mmsystem.h> 
#include <cstdlib> 
#include <conio2.h> 

using namespace std; 

int main() 
{ 

char soundfile[] = "C:/Users/dfval/Downloads/lofi.wav" ; 
PlaySound((LPCSTR)soundfile, NULL, SND_FILENAME | SND_ASYNC ); 

system("PAUSE"); 

return 0; 
} 

