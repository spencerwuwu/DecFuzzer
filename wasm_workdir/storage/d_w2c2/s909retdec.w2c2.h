#ifndef s909retdec_H
#define s909retdec_H

#include "w2c2_base.h"

typedef struct s909retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s909retdecInstance;

void f0(s909retdecInstance*);

void f1(s909retdecInstance*);

U32 f2(s909retdecInstance*);

void f3(s909retdecInstance*,U32);

U32 f4(s909retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s909retdecInstance*,U32,U32,U32,U32,U32);

void f6(s909retdecInstance*,U32);

void f7(s909retdecInstance*,U32,U32,U32);

void f8(s909retdecInstance*,U32,U32,U32);

void s909retdec____wasm_call_ctors(s909retdecInstance*i);

void s909retdec____wasm_apply_data_relocs(s909retdecInstance*i);

U32 s909retdec_func_1(s909retdecInstance*i);

void s909retdec_call_cb(s909retdecInstance*i,U32 l0);

void s909retdecInstantiate(s909retdecInstance* instance, void* resolve(const char* module, const char* name));

void s909retdecFreeInstance(s909retdecInstance* instance);

#endif /* s909retdec_H */

