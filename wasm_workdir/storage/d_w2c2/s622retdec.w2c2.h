#ifndef s622retdec_H
#define s622retdec_H

#include "w2c2_base.h"

typedef struct s622retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s622retdecInstance;

void f0(s622retdecInstance*);

void f1(s622retdecInstance*);

U32 f2(s622retdecInstance*);

void f3(s622retdecInstance*,U32);

U32 f4(s622retdecInstance*,U32,U32,U32);

void f5(s622retdecInstance*,U32,U32,U32,U32,U32);

void f6(s622retdecInstance*,U32);

void f7(s622retdecInstance*,U32,U32,U32);

void f8(s622retdecInstance*,U32,U32,U32);

void s622retdec____wasm_call_ctors(s622retdecInstance*i);

void s622retdec____wasm_apply_data_relocs(s622retdecInstance*i);

U32 s622retdec_func_1(s622retdecInstance*i);

void s622retdec_call_cb(s622retdecInstance*i,U32 l0);

void s622retdecInstantiate(s622retdecInstance* instance, void* resolve(const char* module, const char* name));

void s622retdecFreeInstance(s622retdecInstance* instance);

#endif /* s622retdec_H */

