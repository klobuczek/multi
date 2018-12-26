#include "hello.h"

VALUE Hello = Qnil;
extern VALUE rb_mMulti;

void rb_init_hello()
{
	Hello = rb_define_class_under(rb_mMulti, "Hello", rb_cObject);
	rb_define_method(Hello, "hello", rb_hello_hello, 0);
}

VALUE rb_hello_hello(VALUE self)
{
	return rb_str_new2("Hello World! (C)");
}