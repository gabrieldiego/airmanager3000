#include <stdlib.h>

#include "UI.H"
#include "ENGINE.H"

#include "UI.C"
#include "ENGINE.C"
//TODO: Should not need to include the .C file and declare functions static

int main() {
  user_action_t user_action = UA_INIT;
  engine_data_t *engine_data = NULL;

  do {
    engine_action(user_action);
    user_action = user_interface(engine_data);
  } while (user_action != UA_CLOSE);

  close_interface();

  return 0;
}