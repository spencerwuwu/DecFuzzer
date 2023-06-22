#ifndef s363retdec_H
#define s363retdec_H

#include "w2c2_base.h"

typedef struct s363retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s363retdecInstance;

void f0(s363retdecInstance*);

void f1(s363retdecInstance*);

U32 f2(s363retdecInstance*);

void f3(s363retdecInstance*,U32);

U32 f4(s363retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s363retdecInstance*,U32,U32,U32,U32,U32);

void f6(s363retdecInstance*,U32);

void f7(s363retdecInstance*,U32,U32,U32);

void f8(s363retdecInstance*,U32,U32,U32);

void s363retdec____wasm_call_ctors(s363retdecInstance*i);

void s363retdec____wasm_apply_data_relocs(s363retdecInstance*i);

U32 s363retdec_func_1(s363retdecInstance*i);

void s363retdec_call_cb(s363retdecInstance*i,U32 l0);

void s363retdecInstantiate(s363retdecInstance* instance, void* resolve(const char* module, const char* name));

void s363retdecFreeInstance(s363retdecInstance* instance);

#endif /* s363retdec_H */

