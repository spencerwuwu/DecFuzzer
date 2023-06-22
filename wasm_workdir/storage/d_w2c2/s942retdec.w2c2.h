#ifndef s942retdec_H
#define s942retdec_H

#include "w2c2_base.h"

typedef struct s942retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s942retdecInstance;

void f0(s942retdecInstance*);

void f1(s942retdecInstance*);

U32 f2(s942retdecInstance*);

void f3(s942retdecInstance*,U32);

U32 f4(s942retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s942retdecInstance*,U32,U32,U32,U32,U32);

void f6(s942retdecInstance*,U32);

void f7(s942retdecInstance*,U32,U32,U32);

void f8(s942retdecInstance*,U32,U32,U32);

void s942retdec____wasm_call_ctors(s942retdecInstance*i);

void s942retdec____wasm_apply_data_relocs(s942retdecInstance*i);

U32 s942retdec_func_1(s942retdecInstance*i);

void s942retdec_call_cb(s942retdecInstance*i,U32 l0);

void s942retdecInstantiate(s942retdecInstance* instance, void* resolve(const char* module, const char* name));

void s942retdecFreeInstance(s942retdecInstance* instance);

#endif /* s942retdec_H */

