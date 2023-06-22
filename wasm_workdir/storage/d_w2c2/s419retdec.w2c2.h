#ifndef s419retdec_H
#define s419retdec_H

#include "w2c2_base.h"

typedef struct s419retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s419retdecInstance;

void f0(s419retdecInstance*);

void f1(s419retdecInstance*);

U32 f2(s419retdecInstance*);

void f3(s419retdecInstance*,U32);

U32 f4(s419retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s419retdecInstance*,U32,U32,U32,U32,U32);

void f6(s419retdecInstance*,U32);

void f7(s419retdecInstance*,U32,U32,U32);

void f8(s419retdecInstance*,U32,U32,U32);

void s419retdec____wasm_call_ctors(s419retdecInstance*i);

void s419retdec____wasm_apply_data_relocs(s419retdecInstance*i);

U32 s419retdec_func_1(s419retdecInstance*i);

void s419retdec_call_cb(s419retdecInstance*i,U32 l0);

void s419retdecInstantiate(s419retdecInstance* instance, void* resolve(const char* module, const char* name));

void s419retdecFreeInstance(s419retdecInstance* instance);

#endif /* s419retdec_H */

