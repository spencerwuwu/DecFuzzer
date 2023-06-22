#ifndef s950retdec_H
#define s950retdec_H

#include "w2c2_base.h"

typedef struct s950retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s950retdecInstance;

void f0(s950retdecInstance*);

void f1(s950retdecInstance*);

U32 f2(s950retdecInstance*);

void f3(s950retdecInstance*,U32);

U32 f4(s950retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s950retdecInstance*,U32,U32,U32,U32,U32);

void f6(s950retdecInstance*,U32);

void f7(s950retdecInstance*,U32,U32,U32);

void f8(s950retdecInstance*,U32,U32,U32);

void s950retdec____wasm_call_ctors(s950retdecInstance*i);

void s950retdec____wasm_apply_data_relocs(s950retdecInstance*i);

U32 s950retdec_func_1(s950retdecInstance*i);

void s950retdec_call_cb(s950retdecInstance*i,U32 l0);

void s950retdecInstantiate(s950retdecInstance* instance, void* resolve(const char* module, const char* name));

void s950retdecFreeInstance(s950retdecInstance* instance);

#endif /* s950retdec_H */

