#ifndef s602retdec_H
#define s602retdec_H

#include "w2c2_base.h"

typedef struct s602retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s602retdecInstance;

void f0(s602retdecInstance*);

void f1(s602retdecInstance*);

U32 f2(s602retdecInstance*);

void f3(s602retdecInstance*,U32);

U32 f4(s602retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s602retdecInstance*,U32,U32,U32,U32,U32);

void f6(s602retdecInstance*,U32);

void f7(s602retdecInstance*,U32,U32,U32);

void f8(s602retdecInstance*,U32,U32,U32);

void s602retdec____wasm_call_ctors(s602retdecInstance*i);

void s602retdec____wasm_apply_data_relocs(s602retdecInstance*i);

U32 s602retdec_func_1(s602retdecInstance*i);

void s602retdec_call_cb(s602retdecInstance*i,U32 l0);

void s602retdecInstantiate(s602retdecInstance* instance, void* resolve(const char* module, const char* name));

void s602retdecFreeInstance(s602retdecInstance* instance);

#endif /* s602retdec_H */

