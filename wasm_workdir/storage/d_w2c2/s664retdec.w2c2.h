#ifndef s664retdec_H
#define s664retdec_H

#include "w2c2_base.h"

typedef struct s664retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s664retdecInstance;

void f0(s664retdecInstance*);

void f1(s664retdecInstance*);

U32 f2(s664retdecInstance*);

void f3(s664retdecInstance*,U32);

U32 f4(s664retdecInstance*,U32,U32,U32,U32,U32);

void f5(s664retdecInstance*,U32,U32,U32,U32,U32);

void f6(s664retdecInstance*,U32);

void f7(s664retdecInstance*,U32,U32,U32);

void f8(s664retdecInstance*,U32,U32,U32);

void s664retdec____wasm_call_ctors(s664retdecInstance*i);

void s664retdec____wasm_apply_data_relocs(s664retdecInstance*i);

U32 s664retdec_func_1(s664retdecInstance*i);

void s664retdec_call_cb(s664retdecInstance*i,U32 l0);

void s664retdecInstantiate(s664retdecInstance* instance, void* resolve(const char* module, const char* name));

void s664retdecFreeInstance(s664retdecInstance* instance);

#endif /* s664retdec_H */

