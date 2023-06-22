#ifndef s276retdec_H
#define s276retdec_H

#include "w2c2_base.h"

typedef struct s276retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s276retdecInstance;

void f0(s276retdecInstance*);

void f1(s276retdecInstance*);

U32 f2(s276retdecInstance*);

void f3(s276retdecInstance*,U32);

U32 f4(s276retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s276retdecInstance*,U32,U32,U32,U32,U32);

void f6(s276retdecInstance*,U32);

void f7(s276retdecInstance*,U32,U32,U32);

void f8(s276retdecInstance*,U32,U32,U32);

void s276retdec____wasm_call_ctors(s276retdecInstance*i);

void s276retdec____wasm_apply_data_relocs(s276retdecInstance*i);

U32 s276retdec_func_1(s276retdecInstance*i);

void s276retdec_call_cb(s276retdecInstance*i,U32 l0);

void s276retdecInstantiate(s276retdecInstance* instance, void* resolve(const char* module, const char* name));

void s276retdecFreeInstance(s276retdecInstance* instance);

#endif /* s276retdec_H */

