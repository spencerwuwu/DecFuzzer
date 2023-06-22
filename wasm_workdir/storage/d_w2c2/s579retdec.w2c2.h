#ifndef s579retdec_H
#define s579retdec_H

#include "w2c2_base.h"

typedef struct s579retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s579retdecInstance;

void f0(s579retdecInstance*);

void f1(s579retdecInstance*);

U32 f2(s579retdecInstance*);

void f3(s579retdecInstance*,U32);

U32 f4(s579retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s579retdecInstance*,U32,U32,U32,U32,U32);

void f6(s579retdecInstance*,U32);

void f7(s579retdecInstance*,U32,U32,U32);

void f8(s579retdecInstance*,U32,U32,U32);

void s579retdec____wasm_call_ctors(s579retdecInstance*i);

void s579retdec____wasm_apply_data_relocs(s579retdecInstance*i);

U32 s579retdec_func_1(s579retdecInstance*i);

void s579retdec_call_cb(s579retdecInstance*i,U32 l0);

void s579retdecInstantiate(s579retdecInstance* instance, void* resolve(const char* module, const char* name));

void s579retdecFreeInstance(s579retdecInstance* instance);

#endif /* s579retdec_H */

