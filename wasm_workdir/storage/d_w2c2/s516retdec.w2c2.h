#ifndef s516retdec_H
#define s516retdec_H

#include "w2c2_base.h"

typedef struct s516retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s516retdecInstance;

void f0(s516retdecInstance*);

void f1(s516retdecInstance*);

U32 f2(s516retdecInstance*);

void f3(s516retdecInstance*,U32);

U32 f4(s516retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s516retdecInstance*,U32,U32,U32,U32,U32);

void f6(s516retdecInstance*,U32);

void f7(s516retdecInstance*,U32,U32,U32);

void f8(s516retdecInstance*,U32,U32,U32);

void s516retdec____wasm_call_ctors(s516retdecInstance*i);

void s516retdec____wasm_apply_data_relocs(s516retdecInstance*i);

U32 s516retdec_func_1(s516retdecInstance*i);

void s516retdec_call_cb(s516retdecInstance*i,U32 l0);

void s516retdecInstantiate(s516retdecInstance* instance, void* resolve(const char* module, const char* name));

void s516retdecFreeInstance(s516retdecInstance* instance);

#endif /* s516retdec_H */

