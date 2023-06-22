#ifndef s959retdec_H
#define s959retdec_H

#include "w2c2_base.h"

typedef struct s959retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s959retdecInstance;

void f0(s959retdecInstance*);

void f1(s959retdecInstance*);

U32 f2(s959retdecInstance*);

void f3(s959retdecInstance*,U32);

U32 f4(s959retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s959retdecInstance*,U32,U32,U32,U32,U32);

void f6(s959retdecInstance*,U32);

void f7(s959retdecInstance*,U32,U32,U32);

void f8(s959retdecInstance*,U32,U32,U32);

void s959retdec____wasm_call_ctors(s959retdecInstance*i);

void s959retdec____wasm_apply_data_relocs(s959retdecInstance*i);

U32 s959retdec_func_1(s959retdecInstance*i);

void s959retdec_call_cb(s959retdecInstance*i,U32 l0);

void s959retdecInstantiate(s959retdecInstance* instance, void* resolve(const char* module, const char* name));

void s959retdecFreeInstance(s959retdecInstance* instance);

#endif /* s959retdec_H */

