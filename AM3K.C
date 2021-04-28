#include "UI.H"
#include "UI.C"

int main() {
  int user_action;

  do {
    user_action = user_interface();
  } while (user_action != UA_CLOSE);

  close_interface();

  return 0;
}