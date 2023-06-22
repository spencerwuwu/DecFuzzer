#ifndef s352retdec_H
#define s352retdec_H

#include "w2c2_base.h"

typedef struct s352retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s352retdecInstance;

void f0(s352retdecInstance*);

void f1(s352retdecInstance*);

U32 f2(s352retdecInstance*);

void f3(s352retdecInstance*,U32);

U32 f4(s352retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s352retdecInstance*,U32,U32,U32,U32,U32);

void f6(s352retdecInstance*,U32);

void f7(s352retdecInstance*,U32,U32,U32);

void f8(s352retdecInstance*,U32,U32,U32);

void s352retdec____wasm_call_ctors(s352retdecInstance*i);

void s352retdec____wasm_apply_data_relocs(s352retdecInstance*i);

U32 s352retdec_func_1(s352retdecInstance*i);

void s352retdec_call_cb(s352retdecInstance*i,U32 l0);

void s352retdecInstantiate(s352retdecInstance* instance, void* resolve(const char* module, const char* name));

void s352retdecFreeInstance(s352retdecInstance* instance);

#endif /* s352retdec_H */

