#ifndef s996retdec_H
#define s996retdec_H

#include "w2c2_base.h"

typedef struct s996retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s996retdecInstance;

void f0(s996retdecInstance*);

void f1(s996retdecInstance*);

U32 f2(s996retdecInstance*);

void f3(s996retdecInstance*,U32);

U32 f4(s996retdecInstance*,U32,U32,U32,U32);

void f5(s996retdecInstance*,U32,U32,U32,U32,U32);

void f6(s996retdecInstance*,U32);

void f7(s996retdecInstance*,U32,U32,U32);

void f8(s996retdecInstance*,U32,U32,U32);

void s996retdec____wasm_call_ctors(s996retdecInstance*i);

void s996retdec____wasm_apply_data_relocs(s996retdecInstance*i);

U32 s996retdec_func_1(s996retdecInstance*i);

void s996retdec_call_cb(s996retdecInstance*i,U32 l0);

void s996retdecInstantiate(s996retdecInstance* instance, void* resolve(const char* module, const char* name));

void s996retdecFreeInstance(s996retdecInstance* instance);

#endif /* s996retdec_H */

