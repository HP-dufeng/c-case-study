#include <unistd.h>
#include <stdlib.h>
#include <curses.h>

int main()
{
    WINDOW *sub_window_ptr;
    int x;
    int y;
    int counter;
    char a_letter = '1';

    initscr();

    for(y=0; y<LINES-1; y++) {
        for(x=0; x<COLS-1; x++) {
            mvwaddch(stdscr, y, x, a_letter);
            a_letter++;
            if(a_letter > '9') a_letter = '1';
        }
    }

    sub_window_ptr = subwin(stdscr, 10, 20, 10, 10);
    scrollok(sub_window_ptr, 1);

    touchwin(stdscr);
    refresh();
    sleep(1);

    werase(sub_window_ptr);
    mvwprintw(sub_window_ptr, 2, 0, "%s", "This window will now scroll");
    wrefresh(sub_window_ptr);
    sleep(1);

    for(counter = 1; counter < 10; counter++) {
        wprintw(sub_window_ptr, "%s", "This text is both wrapping an scrolling.");
        wrefresh(sub_window_ptr);
        sleep(1);
    }

    delwin(sub_window_ptr);

    touchwin(stdscr);
    refresh();
    sleep(1);

    endwin();

    return 0;
}