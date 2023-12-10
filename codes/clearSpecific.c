#include <stdio.h>
#include <windows.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    printf("Line 1\n");
    printf("Line 2\n");
    printf("Line 3\n");

    // Move the cursor up 2 lines
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    COORD cursorPos = { csbi.dwCursorPosition.X, csbi.dwCursorPosition.Y - 2 };
    SetConsoleCursorPosition(hConsole, cursorPos);

    // Clear the last 2 lines
    DWORD numCharsWritten;
    DWORD numLines = 2;
    DWORD cursorLine = csbi.dwCursorPosition.Y - numLines;
    DWORD charsToWrite = csbi.dwSize.X * numLines;
    COORD startCoords = { 0, cursorLine };
    FillConsoleOutputCharacter(hConsole, ' ', charsToWrite, startCoords, &numCharsWritten);
    SetConsoleCursorPosition(hConsole, cursorPos);

    return 0;
}
