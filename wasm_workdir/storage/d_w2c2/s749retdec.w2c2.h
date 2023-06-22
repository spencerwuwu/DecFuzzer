#ifndef s749retdec_H
#define s749retdec_H

#include "w2c2_base.h"

typedef struct s749retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s749retdecInstance;

void f0(s749retdecInstance*);

void f1(s749retdecInstance*);

U32 f2(s749retdecInstance*);

void f3(s749retdecInstance*,U32);

U32 f4(s749retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s749retdecInstance*,U32,U32,U32,U32,U32);

void f6(s749retdecInstance*,U32);

void f7(s749retdecInstance*,U32,U32,U32);

void f8(s749retdecInstance*,U32,U32,U32);

void s749retdec____wasm_call_ctors(s749retdecInstance*i);

void s749retdec____wasm_apply_data_relocs(s749retdecInstance*i);

U32 s749retdec_func_1(s749retdecInstance*i);

void s749retdec_call_cb(s749retdecInstance*i,U32 l0);

void s749retdecInstantiate(s749retdecInstance* instance, void* resolve(const char* module, const char* name));

void s749retdecFreeInstance(s749retdecInstance* instance);

#endif /* s749retdec_H */

