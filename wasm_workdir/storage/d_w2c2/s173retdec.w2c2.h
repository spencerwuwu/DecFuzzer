#ifndef s173retdec_H
#define s173retdec_H

#include "w2c2_base.h"

typedef struct s173retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s173retdecInstance;

void f0(s173retdecInstance*);

void f1(s173retdecInstance*);

U32 f2(s173retdecInstance*);

void f3(s173retdecInstance*,U32);

U32 f4(s173retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s173retdecInstance*,U32,U32,U32,U32,U32);

void f6(s173retdecInstance*,U32);

void f7(s173retdecInstance*,U32,U32,U32);

void f8(s173retdecInstance*,U32,U32,U32);

void s173retdec____wasm_call_ctors(s173retdecInstance*i);

void s173retdec____wasm_apply_data_relocs(s173retdecInstance*i);

U32 s173retdec_func_1(s173retdecInstance*i);

void s173retdec_call_cb(s173retdecInstance*i,U32 l0);

void s173retdecInstantiate(s173retdecInstance* instance, void* resolve(const char* module, const char* name));

void s173retdecFreeInstance(s173retdecInstance* instance);

#endif /* s173retdec_H */

