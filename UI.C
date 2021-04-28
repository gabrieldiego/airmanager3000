#include <conio.h>
#include <graphics.h>

static int user_interface() {
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\tc\\bgi");

  circle(330,180,100);
  getch();
  return 0;
}

static int close_interface() {
  closegraph();
  restorecrtmode();
  return 0;
}
