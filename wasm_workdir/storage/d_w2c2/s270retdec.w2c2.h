#ifndef s270retdec_H
#define s270retdec_H

#include "w2c2_base.h"

typedef struct s270retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s270retdecInstance;

void f0(s270retdecInstance*);

void f1(s270retdecInstance*);

U32 f2(s270retdecInstance*);

void f3(s270retdecInstance*,U32);

U32 f4(s270retdecInstance*,U32,U32,U32,U32);

void f5(s270retdecInstance*,U32,U32,U32,U32,U32);

void f6(s270retdecInstance*,U32);

void f7(s270retdecInstance*,U32,U32,U32);

void f8(s270retdecInstance*,U32,U32,U32);

void s270retdec____wasm_call_ctors(s270retdecInstance*i);

void s270retdec____wasm_apply_data_relocs(s270retdecInstance*i);

U32 s270retdec_func_1(s270retdecInstance*i);

void s270retdec_call_cb(s270retdecInstance*i,U32 l0);

void s270retdecInstantiate(s270retdecInstance* instance, void* resolve(const char* module, const char* name));

void s270retdecFreeInstance(s270retdecInstance* instance);

#endif /* s270retdec_H */

