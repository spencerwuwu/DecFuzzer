#ifndef s161retdec_H
#define s161retdec_H

#include "w2c2_base.h"

typedef struct s161retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s161retdecInstance;

void f0(s161retdecInstance*);

void f1(s161retdecInstance*);

U32 f2(s161retdecInstance*);

void f3(s161retdecInstance*,U32);

U32 f4(s161retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s161retdecInstance*,U32,U32,U32,U32,U32);

void f6(s161retdecInstance*,U32);

void f7(s161retdecInstance*,U32,U32,U32);

void f8(s161retdecInstance*,U32,U32,U32);

void s161retdec____wasm_call_ctors(s161retdecInstance*i);

void s161retdec____wasm_apply_data_relocs(s161retdecInstance*i);

U32 s161retdec_func_1(s161retdecInstance*i);

void s161retdec_call_cb(s161retdecInstance*i,U32 l0);

void s161retdecInstantiate(s161retdecInstance* instance, void* resolve(const char* module, const char* name));

void s161retdecFreeInstance(s161retdecInstance* instance);

#endif /* s161retdec_H */

