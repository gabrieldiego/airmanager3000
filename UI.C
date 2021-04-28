#ifndef _UI_H_
#include "UI.H"
#endif
#include <conio.h>
#include <graphics.h>

user_action_t user_interface() {
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\tc\\bgi");

  circle(330,180,100);
  getch();
  return UA_CLOSE;
}

static int close_interface() {
  closegraph();
  restorecrtmode();
  return 0;
}
