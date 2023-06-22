#ifndef s853retdec_H
#define s853retdec_H

#include "w2c2_base.h"

typedef struct s853retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s853retdecInstance;

void f0(s853retdecInstance*);

void f1(s853retdecInstance*);

U32 f2(s853retdecInstance*);

void f3(s853retdecInstance*,U32);

U32 f4(s853retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s853retdecInstance*,U32,U32,U32,U32,U32);

void f6(s853retdecInstance*,U32);

void f7(s853retdecInstance*,U32,U32,U32);

void f8(s853retdecInstance*,U32,U32,U32);

void s853retdec____wasm_call_ctors(s853retdecInstance*i);

void s853retdec____wasm_apply_data_relocs(s853retdecInstance*i);

U32 s853retdec_func_1(s853retdecInstance*i);

void s853retdec_call_cb(s853retdecInstance*i,U32 l0);

void s853retdecInstantiate(s853retdecInstance* instance, void* resolve(const char* module, const char* name));

void s853retdecFreeInstance(s853retdecInstance* instance);

#endif /* s853retdec_H */

