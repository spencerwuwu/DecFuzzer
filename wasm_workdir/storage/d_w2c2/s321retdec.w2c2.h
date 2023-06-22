#ifndef s321retdec_H
#define s321retdec_H

#include "w2c2_base.h"

typedef struct s321retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s321retdecInstance;

void f0(s321retdecInstance*);

void f1(s321retdecInstance*);

U32 f2(s321retdecInstance*);

void f3(s321retdecInstance*,U32);

U32 f4(s321retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s321retdecInstance*,U32,U32,U32,U32,U32);

void f6(s321retdecInstance*,U32);

void f7(s321retdecInstance*,U32,U32,U32);

void f8(s321retdecInstance*,U32,U32,U32);

void s321retdec____wasm_call_ctors(s321retdecInstance*i);

void s321retdec____wasm_apply_data_relocs(s321retdecInstance*i);

U32 s321retdec_func_1(s321retdecInstance*i);

void s321retdec_call_cb(s321retdecInstance*i,U32 l0);

void s321retdecInstantiate(s321retdecInstance* instance, void* resolve(const char* module, const char* name));

void s321retdecFreeInstance(s321retdecInstance* instance);

#endif /* s321retdec_H */

