
#include "stdio.h"
#include "windows.h"
#include "conio.h"

void gotoxy(int x, int y)
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

int main()
{
    gotoxy(1, 1);
    printf("*");
    Sleep(50);
    gotoxy(4,1);
    printf("*");
    Sleep(50);
    gotoxy(7, 1);
    printf("*");
    Sleep(50);
    gotoxy(11, 1);
    printf("*");
    Sleep(50);
    gotoxy(15, 1);
    printf("*");
    Sleep(50);
    gotoxy(19, 1);
    printf("*");
    Sleep(50);
    gotoxy(23, 1);
    printf("*");
    Sleep(50);
    gotoxy(27, 1);
    printf("*");
    Sleep(50);
    gotoxy(31, 1);
    printf("*");
    Sleep(50);
    gotoxy(35, 1);
    printf("*");
    Sleep(50);
    gotoxy(39, 1);
    printf("*");
    Sleep(50);
    gotoxy(41, 1);
    printf("*");
    Sleep(50);
    gotoxy(45, 1);
    printf("*");
    Sleep(50);
    gotoxy(49, 1);
    printf("*");
    Sleep(50);
    gotoxy(51, 1);
    printf("*");
    Sleep(50);
    gotoxy(54, 1);
    printf("*");
    Sleep(50);
    gotoxy(59, 1);
    printf("*");
    Sleep(50);
    gotoxy(61, 1);
    printf("*");
    Sleep(50);
    gotoxy(65, 1);
    printf("*");
    Sleep(50);
    gotoxy(69, 1);
    printf("*");
    Sleep(50);
    gotoxy(71, 1);
    printf("*");
    Sleep(50);
    gotoxy(75, 1);
    printf("*");
    Sleep(50);
    gotoxy(79, 1);
    printf("*");
    Sleep(50);
    gotoxy(81, 1);
    printf("*");
    Sleep(50);
    gotoxy(85, 1);
    printf("*");
    Sleep(50);
    gotoxy(91, 1);
    printf("*");
    Sleep(50);
    gotoxy(95, 1);
    printf("*");
    Sleep(50);
    gotoxy(99, 1);
    printf("*");
    Sleep(50);
    gotoxy(103, 1);
    printf("*");
    Sleep(50);
    gotoxy(107, 1);
    printf("*");
    Sleep(50);
    gotoxy(111, 1);
    printf("*");
    Sleep(50);
    gotoxy(115, 1);
    printf("$");
    Sleep(50);
    gotoxy(115, 3);
    printf("$");
    Sleep(50);
    gotoxy(115, 5);
    printf("$");
    Sleep(50);
    gotoxy(115, 7);
    printf("$");
    Sleep(50);
    gotoxy(115, 9);
    printf("$");
    Sleep(50);
    gotoxy(115, 11);
    printf("$");
    Sleep(50);
    gotoxy(115, 13);
    printf("$");
    Sleep(50);
    gotoxy(115, 15);
    printf("$");
    Sleep(50);
    gotoxy(115, 17);
    printf("$");
    Sleep(50);
    gotoxy(115, 19);
    printf("$");
    Sleep(50);
    gotoxy(115, 21);
    printf("$");
    Sleep(50);
    gotoxy(115, 23);
    printf("$");
    Sleep(50);
    gotoxy(115, 25);
    printf("$");
    Sleep(50);
    gotoxy(115, 27);
    printf("$");
    Sleep(50);
    gotoxy(115, 29);
    printf("$");
    Sleep(50);
    gotoxy(111, 29);
    printf("&");
    Sleep(50);
    gotoxy(107, 29);
    printf("&");
    Sleep(50);
    gotoxy(103, 29);
    printf("&");
    Sleep(50);
    gotoxy(99, 29);
    printf("&");
    Sleep(50);
    gotoxy(99, 29);
    printf("&");
    Sleep(50);
    gotoxy(95, 29);
    printf("&");
    Sleep(50);
    gotoxy(91, 29);
    printf("&");
    Sleep(50);
    gotoxy(87, 29);
    printf("&");
    Sleep(50);
    gotoxy(85, 29);
    printf("&");
    Sleep(50);
    gotoxy(81, 29);
    printf("&");
    Sleep(50);
    gotoxy(77, 29);
    printf("&");
    Sleep(50);
    gotoxy(73, 29);
    printf("&");
    Sleep(50);
    gotoxy(69, 29);
    printf("&");
    Sleep(50);
    gotoxy(65, 29);
    printf("&");
    Sleep(50);
    gotoxy(61, 29);
    printf("&");
    Sleep(50);
    gotoxy(57, 29);
    printf("&");
    Sleep(50);
    gotoxy(53, 29);
    printf("&");
    Sleep(50);
    gotoxy(49, 29);
    printf("&");
    Sleep(50);
    gotoxy(45, 29);
    printf("&");
    Sleep(50);
    gotoxy(41, 29);
    printf("&");
    Sleep(50);
    gotoxy(37, 29);
    printf("&");
    Sleep(50);
    gotoxy(33, 29);
    printf("&");
    Sleep(50);
    gotoxy(29, 29);
    printf("&");
    Sleep(50);
    gotoxy(25, 29);
    printf("&");
    Sleep(50);
    gotoxy(21, 29);
    printf("&");
    Sleep(50);
    gotoxy(17, 29);
    printf("&");
    Sleep(50);
    gotoxy(13, 29);
    printf("&");
    Sleep(50);
    gotoxy(13, 25);
    printf("#");
    Sleep(50);
    gotoxy(13, 21);
    printf("#");
    Sleep(50);
    gotoxy(13, 17);
    printf("#");
    Sleep(50);
    gotoxy(13, 13);
    printf("#");
    Sleep(50);
    gotoxy(13, 9);
    printf("#");
    Sleep(50);
    gotoxy(17, 9);
    printf("/");
    Sleep(50);
    gotoxy(21, 9);
    printf("/");
    Sleep(50);
    gotoxy(25, 9);
    printf("/");
    Sleep(50);
    gotoxy(29, 9);
    printf("/");
    Sleep(50);
    gotoxy(33, 9);
    printf("/");
    Sleep(50);
    gotoxy(37, 9);
    printf("/");
    Sleep(50);
    gotoxy(41, 9);
    printf("/");
    Sleep(50);
    gotoxy(45, 9);
    printf("/");
    Sleep(50);
    gotoxy(49, 9);
    printf("/");
    Sleep(50);
    gotoxy(53, 9);
    printf("/");
    Sleep(50);
    gotoxy(57, 9);
    printf("/");
    Sleep(50);
    gotoxy(61, 9);
    printf("/");
    Sleep(50);
    gotoxy(65, 9);
    printf("/");
    Sleep(50);
    gotoxy(69, 9);
    printf("/");
    Sleep(50);
    gotoxy(73, 9);
    printf("/");
    Sleep(50);
    gotoxy(77, 9);
    printf("/");
    Sleep(50);
    gotoxy(81, 9);
    printf("/");
    Sleep(50);
    gotoxy(85, 9);
    printf("/");
    Sleep(50);
    gotoxy(89, 9);
    printf("/");
    Sleep(50);
    gotoxy(93, 9);
    printf("/");
    Sleep(50);
    gotoxy(97, 9);
    printf("/");
    Sleep(50);
    gotoxy(97, 13);
    printf("=");
    Sleep(50);
    gotoxy(97, 17);
    printf("=");
    Sleep(50);
    gotoxy(97, 21);
    printf("=");
    Sleep(50);
    gotoxy(97, 25);
    printf("=");
    Sleep(50);
    gotoxy(93, 25);
    printf("#");
    Sleep(50);
    gotoxy(89, 25);
    printf("#");
    Sleep(50);
    gotoxy(85, 25);
    printf("#");
    Sleep(50);
    gotoxy(81, 25);
    printf("#");
    Sleep(50);
    gotoxy(77, 25);
    printf("#");
    Sleep(50);
    gotoxy(73, 25);
    printf("#");
    Sleep(50);
    gotoxy(69, 25);
    printf("#");
    Sleep(50);
    gotoxy(65, 25);
    printf("#");
    Sleep(50);
    gotoxy(61, 25);
    printf("#");
    Sleep(50);
    gotoxy(57, 25);
    printf("#");
    Sleep(50);
    gotoxy(53, 25);
    printf("#");
    Sleep(50);
    gotoxy(49, 25);
    printf("#");
    Sleep(50);
    gotoxy(45, 25);
    printf("#");
    Sleep(50);
    gotoxy(41, 25);
    printf("#");
    Sleep(50);
    gotoxy(37, 25);
    printf("#");
    Sleep(50);
    gotoxy(33, 25);
    printf("#");
    Sleep(50);
    gotoxy(29, 25);
    printf("#");
    Sleep(50);
    gotoxy(25, 25);
    printf("#");
    Sleep(50);
    gotoxy(25, 21);
    printf("-");
    Sleep(50);
    gotoxy(25, 17);
    printf("+");
    Sleep(50);
    gotoxy(29, 17);
    printf("+");
    Sleep(50);
    gotoxy(33, 17);
    printf("+");
    Sleep(50);
    gotoxy(37, 17);
    printf("+");
    Sleep(50);
    gotoxy(41, 17);
    printf("+");
    Sleep(50);
    gotoxy(45, 17);
    printf("+");
    Sleep(500);
    gotoxy(49, 17);
    printf("F");
    Sleep(500);
    gotoxy(53, 17);
    printf("I");
    Sleep(500);
    gotoxy(57, 17);
    printf("N");
    Sleep(500);
    gotoxy(61, 17);
    printf("..");
    Sleep(500);
    gotoxy(65, 17);
    printf("..");
    getch();
}