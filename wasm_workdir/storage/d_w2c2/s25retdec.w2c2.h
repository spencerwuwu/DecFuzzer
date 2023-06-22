#ifndef s25retdec_H
#define s25retdec_H

#include "w2c2_base.h"

typedef struct s25retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s25retdecInstance;

void f0(s25retdecInstance*);

void f1(s25retdecInstance*);

U32 f2(s25retdecInstance*);

void f3(s25retdecInstance*,U32);

U32 f4(s25retdecInstance*,U32,U32,U32,U32);

void f5(s25retdecInstance*,U32,U32,U32,U32,U32);

void f6(s25retdecInstance*,U32);

void f7(s25retdecInstance*,U32,U32,U32);

void f8(s25retdecInstance*,U32,U32,U32);

void s25retdec____wasm_call_ctors(s25retdecInstance*i);

void s25retdec____wasm_apply_data_relocs(s25retdecInstance*i);

U32 s25retdec_func_1(s25retdecInstance*i);

void s25retdec_call_cb(s25retdecInstance*i,U32 l0);

void s25retdecInstantiate(s25retdecInstance* instance, void* resolve(const char* module, const char* name));

void s25retdecFreeInstance(s25retdecInstance* instance);

#endif /* s25retdec_H */

