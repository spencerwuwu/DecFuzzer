#ifndef s589retdec_H
#define s589retdec_H

#include "w2c2_base.h"

typedef struct s589retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s589retdecInstance;

void f0(s589retdecInstance*);

void f1(s589retdecInstance*);

U32 f2(s589retdecInstance*);

void f3(s589retdecInstance*,U32);

U32 f4(s589retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s589retdecInstance*,U32,U32,U32,U32,U32);

void f6(s589retdecInstance*,U32);

void f7(s589retdecInstance*,U32,U32,U32);

void f8(s589retdecInstance*,U32,U32,U32);

void s589retdec____wasm_call_ctors(s589retdecInstance*i);

void s589retdec____wasm_apply_data_relocs(s589retdecInstance*i);

U32 s589retdec_func_1(s589retdecInstance*i);

void s589retdec_call_cb(s589retdecInstance*i,U32 l0);

void s589retdecInstantiate(s589retdecInstance* instance, void* resolve(const char* module, const char* name));

void s589retdecFreeInstance(s589retdecInstance* instance);

#endif /* s589retdec_H */

