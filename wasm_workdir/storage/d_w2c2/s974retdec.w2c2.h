#ifndef s974retdec_H
#define s974retdec_H

#include "w2c2_base.h"

typedef struct s974retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s974retdecInstance;

void f0(s974retdecInstance*);

void f1(s974retdecInstance*);

U32 f2(s974retdecInstance*);

void f3(s974retdecInstance*,U32);

U32 f4(s974retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s974retdecInstance*,U32,U32,U32,U32,U32);

void f6(s974retdecInstance*,U32);

void f7(s974retdecInstance*,U32,U32,U32);

void f8(s974retdecInstance*,U32,U32,U32);

void s974retdec____wasm_call_ctors(s974retdecInstance*i);

void s974retdec____wasm_apply_data_relocs(s974retdecInstance*i);

U32 s974retdec_func_1(s974retdecInstance*i);

void s974retdec_call_cb(s974retdecInstance*i,U32 l0);

void s974retdecInstantiate(s974retdecInstance* instance, void* resolve(const char* module, const char* name));

void s974retdecFreeInstance(s974retdecInstance* instance);

#endif /* s974retdec_H */

