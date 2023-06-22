#ifndef s9retdec_H
#define s9retdec_H

#include "w2c2_base.h"

typedef struct s9retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s9retdecInstance;

void f0(s9retdecInstance*);

void f1(s9retdecInstance*);

U32 f2(s9retdecInstance*);

void f3(s9retdecInstance*,U32);

U32 f4(s9retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s9retdecInstance*,U32,U32,U32,U32,U32);

void f6(s9retdecInstance*,U32);

void f7(s9retdecInstance*,U32,U32,U32);

void f8(s9retdecInstance*,U32,U32,U32);

void s9retdec____wasm_call_ctors(s9retdecInstance*i);

void s9retdec____wasm_apply_data_relocs(s9retdecInstance*i);

U32 s9retdec_func_1(s9retdecInstance*i);

void s9retdec_call_cb(s9retdecInstance*i,U32 l0);

void s9retdecInstantiate(s9retdecInstance* instance, void* resolve(const char* module, const char* name));

void s9retdecFreeInstance(s9retdecInstance* instance);

#endif /* s9retdec_H */

