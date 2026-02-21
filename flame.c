#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

// v1.0 - foss - GPL 3.0
// made by randomnerd41.

int main() {
    system("apt update && apt install build-essential -y");
    system("clear");
    printf("welcome to flame!\n");
    printf("flame is a simple tool made in C,\n");
    printf("to help you get started with python coding\n");
    printf("on linux! (debian based)");
    sleep(7);
    system("clear");
    printf("installing tools and making code folder...\n");
    sleep(2);
    system("clear");     
    system("apt install thonny python -y && mkdir code");
    system("clear");
    printf("you now have (thonny - FOSS python ide)\n");
    printf("as well as python installed!\n");
    sleep(5);
    system("clear");
    printf("next you need to open thonny and then\n");
    printf("type your python file and when you click (save)\n");
    printf("save it in the folder named (code)");
    sleep(6);
    system("clear");
    printf("flame - made by randomnerd41\n");
    printf("thonny: https://thonny.org/\n");
    printf("python coding guide: https://www.python.org/about/gettingstarted/\n");
    printf("i did not make thonny! it is a FOSS program that i did not help make!\n");
    sleep(12);
    system("clear");
}
