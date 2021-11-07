#include <ncurses.h>
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	int i;
	initscr();
	start_color();
	init_pair(12,COLOR_BLACK,COLOR_RED);
	init_pair(13,COLOR_YELLOW,COLOR_MAGENTA);
	init_pair(14,COLOR_GREEN,COLOR_CYAN);
	init_pair(15,COLOR_BLACK,COLOR_BLUE);
	init_pair(16,COLOR_BLUE,COLOR_RED);
	init_pair(17,COLOR_CYAN,COLOR_YELLOW);
	for(i=12;i<=17;i++){
		attron(COLOR_PAIR(i));
		printw("\n");
		mvprintw(5,i,"Ilkomp");
		refresh();Sleep(1000);
		attroff(COLOR_PAIR(i));	
	}
	printw("\n\t\tUdah.");
	refresh();Sleep(1000);
	printw("\n\t\tSreen Akan Ditutup Dalam");
	refresh();Sleep(1000);
	for(i=41;i<=43;i++){
		mvprintw(7,i,".");
		refresh();Sleep(0100);
	}
	mvprintw(7,44,"3");
	refresh();Sleep(1000);
	mvprintw(7,44,"2");
	refresh();Sleep(1000);
	mvprintw(7,44,"1");
	refresh();Sleep(1000);

	endwin();
}
