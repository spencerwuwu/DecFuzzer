#ifndef s569retdec_H
#define s569retdec_H

#include "w2c2_base.h"

typedef struct s569retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s569retdecInstance;

void f0(s569retdecInstance*);

void f1(s569retdecInstance*);

U32 f2(s569retdecInstance*);

void f3(s569retdecInstance*,U32);

U32 f4(s569retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s569retdecInstance*,U32,U32,U32,U32,U32);

void f6(s569retdecInstance*,U32);

void f7(s569retdecInstance*,U32,U32,U32);

void f8(s569retdecInstance*,U32,U32,U32);

void s569retdec____wasm_call_ctors(s569retdecInstance*i);

void s569retdec____wasm_apply_data_relocs(s569retdecInstance*i);

U32 s569retdec_func_1(s569retdecInstance*i);

void s569retdec_call_cb(s569retdecInstance*i,U32 l0);

void s569retdecInstantiate(s569retdecInstance* instance, void* resolve(const char* module, const char* name));

void s569retdecFreeInstance(s569retdecInstance* instance);

#endif /* s569retdec_H */

