#ifndef s375retdec_H
#define s375retdec_H

#include "w2c2_base.h"

typedef struct s375retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s375retdecInstance;

void f0(s375retdecInstance*);

void f1(s375retdecInstance*);

U32 f2(s375retdecInstance*);

void f3(s375retdecInstance*,U32);

U32 f4(s375retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s375retdecInstance*,U32,U32,U32,U32,U32);

void f6(s375retdecInstance*,U32);

void f7(s375retdecInstance*,U32,U32,U32);

void f8(s375retdecInstance*,U32,U32,U32);

void s375retdec____wasm_call_ctors(s375retdecInstance*i);

void s375retdec____wasm_apply_data_relocs(s375retdecInstance*i);

U32 s375retdec_func_1(s375retdecInstance*i);

void s375retdec_call_cb(s375retdecInstance*i,U32 l0);

void s375retdecInstantiate(s375retdecInstance* instance, void* resolve(const char* module, const char* name));

void s375retdecFreeInstance(s375retdecInstance* instance);

#endif /* s375retdec_H */

