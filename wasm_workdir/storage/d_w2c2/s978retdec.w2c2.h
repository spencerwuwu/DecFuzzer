#ifndef s978retdec_H
#define s978retdec_H

#include "w2c2_base.h"

typedef struct s978retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s978retdecInstance;

void f0(s978retdecInstance*);

void f1(s978retdecInstance*);

U32 f2(s978retdecInstance*);

void f3(s978retdecInstance*,U32);

U32 f4(s978retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s978retdecInstance*,U32,U32,U32,U32,U32);

void f6(s978retdecInstance*,U32);

void f7(s978retdecInstance*,U32,U32,U32);

void f8(s978retdecInstance*,U32,U32,U32);

void s978retdec____wasm_call_ctors(s978retdecInstance*i);

void s978retdec____wasm_apply_data_relocs(s978retdecInstance*i);

U32 s978retdec_func_1(s978retdecInstance*i);

void s978retdec_call_cb(s978retdecInstance*i,U32 l0);

void s978retdecInstantiate(s978retdecInstance* instance, void* resolve(const char* module, const char* name));

void s978retdecFreeInstance(s978retdecInstance* instance);

#endif /* s978retdec_H */

