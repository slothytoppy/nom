#define NOM_IMPLEMENTATION
#include "nom.h"

int main(int argc, char* argv[]) {
  nom_logger.show_debug = OFF;
  rebuild(argc, argv, __FILE__, "gcc");
  IS_LIBRARY_MODIFIED("nom.h", "build.c", "gcc");
  //  iter_colors();
  nom_log(NOM_WARN, "hello");
  nom_log(NOM_DEBUG, "hello");
  nom_log(NOM_INFO, "hello");
  nom_log(NOM_PANIC, "hello");
  return 0;
  int end = ends_substr("helloaskjldalksjfjasdfkljakjfdashjkfdsahk", "elloaskjldalksjfjasdfkljakjfdashjkfdsahk");
  if(end) {
    printf("has\n");
  } else
    printf("not\n");
  /*
  int x[] = {1, 0};
  nom_cmd_append(&run, "hello");
  nom_cmd_append(&run, "hello");
  nom_cmd_append(&run, "nom");
  nom_cmd_shrink(&run, 2, x);
  */
  //  if (IS_FILE_MODIFIED("nom.c"))
  // printf("hello\n");
  // printf("%d\n", x);
  // printf("hello");
  /* if(IS_LIBRARY_MODIFIED("nom.h", __FILE__, "gcc")) printf("hello world\n");
  Nom_cmd cmd={0};
  nom_cmd_append_many(&cmd, 4, "gcc", "-o", base(__FILE__), __FILE__);
  nom_run_sync(cmd);
  */
  /*
  unsigned fd=inot_setup(NULL);
  unsigned wd=nom_add_watch(fd, ".", IN_MODIFY | IN_CREATE | IN_MOVE);
  char* bin_path="./build";
  char* args[]={NULL};
  nom_read_inot(fd, bin_path, NULL);
  // printf("%d\n", x);
  */
}
