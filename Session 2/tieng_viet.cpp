#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    SetConsoleTitleW("Vi?t Nam Vô Ð?ch!");
    HANDLE hdlConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_FONT_INFOEX consoleFont;
    consoleFont.cbSize = sizeof(consoleFont);
    GetCurrentConsoleFontEx(hdlConsole, FALSE, &consoleFont);
    memcpy(consoleFont.FaceName, L"Consolas", sizeof(consoleFont.FaceName));
    SetCurrentConsoleFontEx(hdlConsole, FALSE, &consoleFont);
    std::wcout << L"Ti?ng Vi?t có d?u" << std::endl;
    std::wstring test;
    std::wcout << L"Hãy nh?p vào m?t chu?i ký t?:" << std::endl;
    std::getline(std::wcin, test);
    std::wcout << L"Chu?i ký t? mà b?n v?a m?i nh?p:" << std::endl;
    std::wcout << test << std::endl;
    return 0;
}
