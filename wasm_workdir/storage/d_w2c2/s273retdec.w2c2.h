#ifndef s273retdec_H
#define s273retdec_H

#include "w2c2_base.h"

typedef struct s273retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s273retdecInstance;

void f0(s273retdecInstance*);

void f1(s273retdecInstance*);

U32 f2(s273retdecInstance*);

void f3(s273retdecInstance*,U32);

void f4(s273retdecInstance*,U32);

void s273retdec____wasm_call_ctors(s273retdecInstance*i);

void s273retdec____wasm_apply_data_relocs(s273retdecInstance*i);

U32 s273retdec_func_1(s273retdecInstance*i);

void s273retdec_call_cb(s273retdecInstance*i,U32 l0);

void s273retdecInstantiate(s273retdecInstance* instance, void* resolve(const char* module, const char* name));

void s273retdecFreeInstance(s273retdecInstance* instance);

#endif /* s273retdec_H */

