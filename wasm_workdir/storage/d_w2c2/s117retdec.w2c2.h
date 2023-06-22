#ifndef s117retdec_H
#define s117retdec_H

#include "w2c2_base.h"

typedef struct s117retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s117retdecInstance;

void f0(s117retdecInstance*);

void f1(s117retdecInstance*);

U32 f2(s117retdecInstance*);

void f3(s117retdecInstance*,U32);

U32 f4(s117retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s117retdecInstance*,U32,U32,U32,U32,U32);

void f6(s117retdecInstance*,U32);

void f7(s117retdecInstance*,U32,U32,U32);

void f8(s117retdecInstance*,U32,U32,U32);

void s117retdec____wasm_call_ctors(s117retdecInstance*i);

void s117retdec____wasm_apply_data_relocs(s117retdecInstance*i);

U32 s117retdec_func_1(s117retdecInstance*i);

void s117retdec_call_cb(s117retdecInstance*i,U32 l0);

void s117retdecInstantiate(s117retdecInstance* instance, void* resolve(const char* module, const char* name));

void s117retdecFreeInstance(s117retdecInstance* instance);

#endif /* s117retdec_H */

