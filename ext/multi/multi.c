#include "multi.h"
#include "hello.h"

VALUE rb_mMulti;

void
Init_multi(void)
{
  rb_mMulti = rb_define_module("Multi");
  rb_init_hello();
}
