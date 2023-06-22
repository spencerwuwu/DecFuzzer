#ifndef s741retdec_H
#define s741retdec_H

#include "w2c2_base.h"

typedef struct s741retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s741retdecInstance;

void f0(s741retdecInstance*);

void f1(s741retdecInstance*);

U32 f2(s741retdecInstance*);

void f3(s741retdecInstance*,U32);

U32 f4(s741retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s741retdecInstance*,U32,U32,U32,U32,U32);

void f6(s741retdecInstance*,U32);

void f7(s741retdecInstance*,U32,U32,U32);

void f8(s741retdecInstance*,U32,U32,U32);

void s741retdec____wasm_call_ctors(s741retdecInstance*i);

void s741retdec____wasm_apply_data_relocs(s741retdecInstance*i);

U32 s741retdec_func_1(s741retdecInstance*i);

void s741retdec_call_cb(s741retdecInstance*i,U32 l0);

void s741retdecInstantiate(s741retdecInstance* instance, void* resolve(const char* module, const char* name));

void s741retdecFreeInstance(s741retdecInstance* instance);

#endif /* s741retdec_H */

