#define NOM_IMPLEMENTATION
#include "nom.h"

int main() {
  // every function that can succeed should return either Nom_cmd or 1 on success and on failure it should return either a null nom_cmd or 0
  // nom_logger contains a variable that makes debug mode on by default
  // to disable debug info set nom_logger.debug_mode to anything but 0
  rebuild(__FILE__, "gcc");
  // Nom_cmd is a dynamic array for running commands
  Nom_cmd cmd = {0};
  nom_cmd_append_many(&cmd, 4, "gcc", "-g", "-c", "nom.c");
  nom_run_async(cmd);
  nom_cmd_reset(&cmd);
  nom_cmd_append_many(&cmd, 4, "gcc", "nom.o", "-o", "nom");
  nom_run_async(cmd);
  // nom_run_async and nom_run_sync both run in PATH
  // nom_run_async(cmd);
  // there is nom_cmd_shrink which is used as follows:
  // nom_cmd_shrink(&cmd, count, arr of ints)
  // it removes the elements that are in the array
  nom_cmd_reset(&cmd);
  nom_print_cmd(&cmd);
  nom_cmd_append(&cmd, "build");
  //  the current file will be reran because of nom_run_path
  //  and what is in cmd
  nom_run_path(cmd, NULL);
  nom_cmd_reset(&cmd);
  nom_cmd_append(&cmd, "hello");
  nom_run_path(cmd, NULL);
  //  nom_run_path and nom_run_sync both return 1 on success and 0 on failure
  //  nom_run_async returns pid on success and 0 on failure
}
