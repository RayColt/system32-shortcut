#include <cstdlib>
/*
* system32-shortcut 
* 
* @author Ray Colt <ray_colt@colt.com> <ray_colt@microsoft.com>
* @copyright Copyright (c) 2021 Ray Colt
* 
* for example using it for Midnight Commander for Windows
* compile this as mc.exe place it in C:\Windows\System32
* now you can run the command mc in your console (for mc like in Linux)
* anywhere in you Windows
*/
int main()
{ 
    system("\"\"C:\\Program Files (x86)\\\your-program\\\your-program.exe\"");
}
