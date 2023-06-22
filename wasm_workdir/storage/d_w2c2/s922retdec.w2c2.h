#ifndef s922retdec_H
#define s922retdec_H

#include "w2c2_base.h"

typedef struct s922retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s922retdecInstance;

void f0(s922retdecInstance*);

void f1(s922retdecInstance*);

U32 f2(s922retdecInstance*);

void f3(s922retdecInstance*,U32);

U32 f4(s922retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s922retdecInstance*,U32,U32,U32,U32,U32);

void f6(s922retdecInstance*,U32);

void f7(s922retdecInstance*,U32,U32,U32);

void f8(s922retdecInstance*,U32,U32,U32);

void s922retdec____wasm_call_ctors(s922retdecInstance*i);

void s922retdec____wasm_apply_data_relocs(s922retdecInstance*i);

U32 s922retdec_func_1(s922retdecInstance*i);

void s922retdec_call_cb(s922retdecInstance*i,U32 l0);

void s922retdecInstantiate(s922retdecInstance* instance, void* resolve(const char* module, const char* name));

void s922retdecFreeInstance(s922retdecInstance* instance);

#endif /* s922retdec_H */

