#ifndef s908retdec_H
#define s908retdec_H

#include "w2c2_base.h"

typedef struct s908retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s908retdecInstance;

void f0(s908retdecInstance*);

void f1(s908retdecInstance*);

U32 f2(s908retdecInstance*);

void f3(s908retdecInstance*,U32);

U32 f4(s908retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s908retdecInstance*,U32,U32,U32,U32,U32);

void f6(s908retdecInstance*,U32);

void f7(s908retdecInstance*,U32,U32,U32);

void f8(s908retdecInstance*,U32,U32,U32);

void s908retdec____wasm_call_ctors(s908retdecInstance*i);

void s908retdec____wasm_apply_data_relocs(s908retdecInstance*i);

U32 s908retdec_func_1(s908retdecInstance*i);

void s908retdec_call_cb(s908retdecInstance*i,U32 l0);

void s908retdecInstantiate(s908retdecInstance* instance, void* resolve(const char* module, const char* name));

void s908retdecFreeInstance(s908retdecInstance* instance);

#endif /* s908retdec_H */

