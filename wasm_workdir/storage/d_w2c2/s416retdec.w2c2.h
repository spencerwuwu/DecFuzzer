#ifndef s416retdec_H
#define s416retdec_H

#include "w2c2_base.h"

typedef struct s416retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s416retdecInstance;

void f0(s416retdecInstance*);

void f1(s416retdecInstance*);

U32 f2(s416retdecInstance*);

void f3(s416retdecInstance*,U32);

U32 f4(s416retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s416retdecInstance*,U32,U32,U32,U32,U32);

void f6(s416retdecInstance*,U32);

void f7(s416retdecInstance*,U32,U32,U32);

void f8(s416retdecInstance*,U32,U32,U32);

void s416retdec____wasm_call_ctors(s416retdecInstance*i);

void s416retdec____wasm_apply_data_relocs(s416retdecInstance*i);

U32 s416retdec_func_1(s416retdecInstance*i);

void s416retdec_call_cb(s416retdecInstance*i,U32 l0);

void s416retdecInstantiate(s416retdecInstance* instance, void* resolve(const char* module, const char* name));

void s416retdecFreeInstance(s416retdecInstance* instance);

#endif /* s416retdec_H */

