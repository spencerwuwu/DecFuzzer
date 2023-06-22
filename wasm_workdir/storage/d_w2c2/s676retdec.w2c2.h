#ifndef s676retdec_H
#define s676retdec_H

#include "w2c2_base.h"

typedef struct s676retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s676retdecInstance;

void f0(s676retdecInstance*);

void f1(s676retdecInstance*);

U32 f2(s676retdecInstance*);

void f3(s676retdecInstance*,U32);

U32 f4(s676retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s676retdecInstance*,U32,U32,U32,U32,U32);

void f6(s676retdecInstance*,U32);

void f7(s676retdecInstance*,U32,U32,U32);

void f8(s676retdecInstance*,U32,U32,U32);

void s676retdec____wasm_call_ctors(s676retdecInstance*i);

void s676retdec____wasm_apply_data_relocs(s676retdecInstance*i);

U32 s676retdec_func_1(s676retdecInstance*i);

void s676retdec_call_cb(s676retdecInstance*i,U32 l0);

void s676retdecInstantiate(s676retdecInstance* instance, void* resolve(const char* module, const char* name));

void s676retdecFreeInstance(s676retdecInstance* instance);

#endif /* s676retdec_H */

