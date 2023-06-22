#ifndef s354retdec_H
#define s354retdec_H

#include "w2c2_base.h"

typedef struct s354retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s354retdecInstance;

void f0(s354retdecInstance*);

void f1(s354retdecInstance*);

U32 f2(s354retdecInstance*);

void f3(s354retdecInstance*,U32);

U32 f4(s354retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s354retdecInstance*,U32,U32,U32,U32,U32);

void f6(s354retdecInstance*,U32);

void f7(s354retdecInstance*,U32,U32,U32);

void f8(s354retdecInstance*,U32,U32,U32);

void s354retdec____wasm_call_ctors(s354retdecInstance*i);

void s354retdec____wasm_apply_data_relocs(s354retdecInstance*i);

U32 s354retdec_func_1(s354retdecInstance*i);

void s354retdec_call_cb(s354retdecInstance*i,U32 l0);

void s354retdecInstantiate(s354retdecInstance* instance, void* resolve(const char* module, const char* name));

void s354retdecFreeInstance(s354retdecInstance* instance);

#endif /* s354retdec_H */

