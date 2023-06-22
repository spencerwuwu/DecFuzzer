#ifndef s608retdec_H
#define s608retdec_H

#include "w2c2_base.h"

typedef struct s608retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s608retdecInstance;

void f0(s608retdecInstance*);

void f1(s608retdecInstance*);

U32 f2(s608retdecInstance*);

void f3(s608retdecInstance*,U32);

U32 f4(s608retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s608retdecInstance*,U32,U32,U32,U32,U32);

void f6(s608retdecInstance*,U32);

void f7(s608retdecInstance*,U32,U32,U32);

void f8(s608retdecInstance*,U32,U32,U32);

void s608retdec____wasm_call_ctors(s608retdecInstance*i);

void s608retdec____wasm_apply_data_relocs(s608retdecInstance*i);

U32 s608retdec_func_1(s608retdecInstance*i);

void s608retdec_call_cb(s608retdecInstance*i,U32 l0);

void s608retdecInstantiate(s608retdecInstance* instance, void* resolve(const char* module, const char* name));

void s608retdecFreeInstance(s608retdecInstance* instance);

#endif /* s608retdec_H */

