#ifndef s105retdec_H
#define s105retdec_H

#include "w2c2_base.h"

typedef struct s105retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s105retdecInstance;

void f0(s105retdecInstance*);

void f1(s105retdecInstance*);

U32 f2(s105retdecInstance*);

void f3(s105retdecInstance*,U32);

U32 f4(s105retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s105retdecInstance*,U32,U32,U32,U32,U32);

void f6(s105retdecInstance*,U32);

void f7(s105retdecInstance*,U32,U32,U32);

void f8(s105retdecInstance*,U32,U32,U32);

void s105retdec____wasm_call_ctors(s105retdecInstance*i);

void s105retdec____wasm_apply_data_relocs(s105retdecInstance*i);

U32 s105retdec_func_1(s105retdecInstance*i);

void s105retdec_call_cb(s105retdecInstance*i,U32 l0);

void s105retdecInstantiate(s105retdecInstance* instance, void* resolve(const char* module, const char* name));

void s105retdecFreeInstance(s105retdecInstance* instance);

#endif /* s105retdec_H */

