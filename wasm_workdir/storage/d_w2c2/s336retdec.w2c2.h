#ifndef s336retdec_H
#define s336retdec_H

#include "w2c2_base.h"

typedef struct s336retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s336retdecInstance;

void f0(s336retdecInstance*);

void f1(s336retdecInstance*);

U32 f2(s336retdecInstance*);

void f3(s336retdecInstance*,U32);

U32 f4(s336retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s336retdecInstance*,U32,U32,U32,U32,U32);

void f6(s336retdecInstance*,U32);

void f7(s336retdecInstance*,U32,U32,U32);

void f8(s336retdecInstance*,U32,U32,U32);

void s336retdec____wasm_call_ctors(s336retdecInstance*i);

void s336retdec____wasm_apply_data_relocs(s336retdecInstance*i);

U32 s336retdec_func_1(s336retdecInstance*i);

void s336retdec_call_cb(s336retdecInstance*i,U32 l0);

void s336retdecInstantiate(s336retdecInstance* instance, void* resolve(const char* module, const char* name));

void s336retdecFreeInstance(s336retdecInstance* instance);

#endif /* s336retdec_H */

