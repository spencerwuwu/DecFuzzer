#ifndef s383retdec_H
#define s383retdec_H

#include "w2c2_base.h"

typedef struct s383retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s383retdecInstance;

void f0(s383retdecInstance*);

void f1(s383retdecInstance*);

U32 f2(s383retdecInstance*);

void f3(s383retdecInstance*,U32);

U32 f4(s383retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s383retdecInstance*,U32,U32,U32,U32,U32);

void f6(s383retdecInstance*,U32);

void f7(s383retdecInstance*,U32,U32,U32);

void f8(s383retdecInstance*,U32,U32,U32);

void s383retdec____wasm_call_ctors(s383retdecInstance*i);

void s383retdec____wasm_apply_data_relocs(s383retdecInstance*i);

U32 s383retdec_func_1(s383retdecInstance*i);

void s383retdec_call_cb(s383retdecInstance*i,U32 l0);

void s383retdecInstantiate(s383retdecInstance* instance, void* resolve(const char* module, const char* name));

void s383retdecFreeInstance(s383retdecInstance* instance);

#endif /* s383retdec_H */

