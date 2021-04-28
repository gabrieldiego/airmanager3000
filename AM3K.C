#ifndef _UI_H_
#include "UI.H"
#endif

#include "UI.C"
#include "ENGINE.C"
//TODO: Should not need to include the .C file and declare functions static

int main() {
  user_action_t user_action = UA_INIT;

  do {
    engine_action(user_action);
    user_action = user_interface();
  } while (user_action != UA_CLOSE);

  close_interface();

  return 0;
}