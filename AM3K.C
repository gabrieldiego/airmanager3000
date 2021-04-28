#include <conio.h>
#include <graphics.h>

#define UA_CLOSE 0

int user_interface() {
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\tc\\bgi");

  circle(330,180,100);
  getch();
  return 0;
}

int close_interface() {
  closegraph();
  restorecrtmode();
  return 0;
}

int main() {
  int user_action;

  do {
    user_action = user_interface();
  } while (user_action != UA_CLOSE);

  close_interface();

  return 0;
}