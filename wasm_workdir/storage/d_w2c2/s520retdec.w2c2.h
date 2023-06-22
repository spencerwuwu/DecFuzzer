#ifndef s520retdec_H
#define s520retdec_H

#include "w2c2_base.h"

typedef struct s520retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s520retdecInstance;

void f0(s520retdecInstance*);

void f1(s520retdecInstance*);

U32 f2(s520retdecInstance*);

void f3(s520retdecInstance*,U32);

U32 f4(s520retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s520retdecInstance*,U32,U32,U32,U32,U32);

void f6(s520retdecInstance*,U32);

void f7(s520retdecInstance*,U32,U32,U32);

void f8(s520retdecInstance*,U32,U32,U32);

void s520retdec____wasm_call_ctors(s520retdecInstance*i);

void s520retdec____wasm_apply_data_relocs(s520retdecInstance*i);

U32 s520retdec_func_1(s520retdecInstance*i);

void s520retdec_call_cb(s520retdecInstance*i,U32 l0);

void s520retdecInstantiate(s520retdecInstance* instance, void* resolve(const char* module, const char* name));

void s520retdecFreeInstance(s520retdecInstance* instance);

#endif /* s520retdec_H */

