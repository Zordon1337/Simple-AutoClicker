
#include <iostream>
#include <windows.h>
using namespace std;

int main(string args[])
{
    while (true)
    {
        if (GetAsyncKeyState(VK_SPACE))
        {
            Sleep(50);
            mouse_event(MOUSEEVENTF_LEFTDOWN, 1280, 720, NULL, NULL);
            mouse_event(MOUSEEVENTF_LEFTUP, 1280, 720, NULL, NULL);
        }
    }
    return 0;
}
