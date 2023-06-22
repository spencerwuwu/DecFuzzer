#ifndef s837retdec_H
#define s837retdec_H

#include "w2c2_base.h"

typedef struct s837retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s837retdecInstance;

void f0(s837retdecInstance*);

void f1(s837retdecInstance*);

U32 f2(s837retdecInstance*);

void f3(s837retdecInstance*,U32);

U32 f4(s837retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s837retdecInstance*,U32,U32,U32,U32,U32);

void f6(s837retdecInstance*,U32);

void f7(s837retdecInstance*,U32,U32,U32);

void f8(s837retdecInstance*,U32,U32,U32);

void s837retdec____wasm_call_ctors(s837retdecInstance*i);

void s837retdec____wasm_apply_data_relocs(s837retdecInstance*i);

U32 s837retdec_func_1(s837retdecInstance*i);

void s837retdec_call_cb(s837retdecInstance*i,U32 l0);

void s837retdecInstantiate(s837retdecInstance* instance, void* resolve(const char* module, const char* name));

void s837retdecFreeInstance(s837retdecInstance* instance);

#endif /* s837retdec_H */

