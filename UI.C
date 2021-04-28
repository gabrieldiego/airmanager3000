#include "UI.H"
#include "ENGINE.H"
#include <conio.h>
#include <graphics.h>

static void init_graphics() {
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\tc\\bgi");
}

static user_action_t user_interface(engine_data_t *data) {
  init_graphics();

  circle(330,180,100);
  getch();
  return UA_CLOSE;
}

static int close_interface() {
  closegraph();
  restorecrtmode();
  return 0;
}
