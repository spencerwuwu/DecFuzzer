#ifndef s821retdec_H
#define s821retdec_H

#include "w2c2_base.h"

typedef struct s821retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s821retdecInstance;

void f0(s821retdecInstance*);

void f1(s821retdecInstance*);

U32 f2(s821retdecInstance*);

void f3(s821retdecInstance*,U32);

U32 f4(s821retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s821retdecInstance*,U32,U32,U32,U32,U32);

void f6(s821retdecInstance*,U32);

void f7(s821retdecInstance*,U32,U32,U32);

void f8(s821retdecInstance*,U32,U32,U32);

void s821retdec____wasm_call_ctors(s821retdecInstance*i);

void s821retdec____wasm_apply_data_relocs(s821retdecInstance*i);

U32 s821retdec_func_1(s821retdecInstance*i);

void s821retdec_call_cb(s821retdecInstance*i,U32 l0);

void s821retdecInstantiate(s821retdecInstance* instance, void* resolve(const char* module, const char* name));

void s821retdecFreeInstance(s821retdecInstance* instance);

#endif /* s821retdec_H */

