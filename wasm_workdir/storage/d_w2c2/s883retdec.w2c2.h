#ifndef s883retdec_H
#define s883retdec_H

#include "w2c2_base.h"

typedef struct s883retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s883retdecInstance;

void f0(s883retdecInstance*);

void f1(s883retdecInstance*);

U32 f2(s883retdecInstance*);

void f3(s883retdecInstance*,U32);

U32 f4(s883retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s883retdecInstance*,U32,U32,U32,U32,U32);

void f6(s883retdecInstance*,U32);

void f7(s883retdecInstance*,U32,U32,U32);

void f8(s883retdecInstance*,U32,U32,U32);

void s883retdec____wasm_call_ctors(s883retdecInstance*i);

void s883retdec____wasm_apply_data_relocs(s883retdecInstance*i);

U32 s883retdec_func_1(s883retdecInstance*i);

void s883retdec_call_cb(s883retdecInstance*i,U32 l0);

void s883retdecInstantiate(s883retdecInstance* instance, void* resolve(const char* module, const char* name));

void s883retdecFreeInstance(s883retdecInstance* instance);

#endif /* s883retdec_H */

