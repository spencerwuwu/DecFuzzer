#ifndef s875retdec_H
#define s875retdec_H

#include "w2c2_base.h"

typedef struct s875retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s875retdecInstance;

void f0(s875retdecInstance*);

void f1(s875retdecInstance*);

U32 f2(s875retdecInstance*);

void f3(s875retdecInstance*,U32);

U32 f4(s875retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s875retdecInstance*,U32,U32,U32,U32,U32);

void f6(s875retdecInstance*,U32);

void f7(s875retdecInstance*,U32,U32,U32);

void f8(s875retdecInstance*,U32,U32,U32);

void s875retdec____wasm_call_ctors(s875retdecInstance*i);

void s875retdec____wasm_apply_data_relocs(s875retdecInstance*i);

U32 s875retdec_func_1(s875retdecInstance*i);

void s875retdec_call_cb(s875retdecInstance*i,U32 l0);

void s875retdecInstantiate(s875retdecInstance* instance, void* resolve(const char* module, const char* name));

void s875retdecFreeInstance(s875retdecInstance* instance);

#endif /* s875retdec_H */

