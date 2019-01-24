#include <ruby.h>

void Init_rent_a_nil()
{
    rb_define_alloc_func(rb_cNilClass, rb_get_alloc_func(rb_cBasicObject));
    rb_define_method(CLASS_OF(rb_cNilClass), "new", rb_class_new_instance, -1);
}
