#ifndef s711retdec_H
#define s711retdec_H

#include "w2c2_base.h"

typedef struct s711retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s711retdecInstance;

void f0(s711retdecInstance*);

void f1(s711retdecInstance*);

U32 f2(s711retdecInstance*);

void f3(s711retdecInstance*,U32);

U32 f4(s711retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s711retdecInstance*,U32,U32,U32,U32,U32);

void f6(s711retdecInstance*,U32);

void f7(s711retdecInstance*,U32,U32,U32);

void f8(s711retdecInstance*,U32,U32,U32);

void s711retdec____wasm_call_ctors(s711retdecInstance*i);

void s711retdec____wasm_apply_data_relocs(s711retdecInstance*i);

U32 s711retdec_func_1(s711retdecInstance*i);

void s711retdec_call_cb(s711retdecInstance*i,U32 l0);

void s711retdecInstantiate(s711retdecInstance* instance, void* resolve(const char* module, const char* name));

void s711retdecFreeInstance(s711retdecInstance* instance);

#endif /* s711retdec_H */

