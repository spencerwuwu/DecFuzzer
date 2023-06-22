#ifndef s123retdec_H
#define s123retdec_H

#include "w2c2_base.h"

typedef struct s123retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s123retdecInstance;

void f0(s123retdecInstance*);

void f1(s123retdecInstance*);

U32 f2(s123retdecInstance*);

void f3(s123retdecInstance*,U32);

void f4(s123retdecInstance*,U32);

void s123retdec____wasm_call_ctors(s123retdecInstance*i);

void s123retdec____wasm_apply_data_relocs(s123retdecInstance*i);

U32 s123retdec_func_1(s123retdecInstance*i);

void s123retdec_call_cb(s123retdecInstance*i,U32 l0);

void s123retdecInstantiate(s123retdecInstance* instance, void* resolve(const char* module, const char* name));

void s123retdecFreeInstance(s123retdecInstance* instance);

#endif /* s123retdec_H */

