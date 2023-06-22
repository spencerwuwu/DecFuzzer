#ifndef s658retdec_H
#define s658retdec_H

#include "w2c2_base.h"

typedef struct s658retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s658retdecInstance;

void f0(s658retdecInstance*);

void f1(s658retdecInstance*);

U32 f2(s658retdecInstance*);

void f3(s658retdecInstance*,U32);

void f4(s658retdecInstance*,U32);

void s658retdec____wasm_call_ctors(s658retdecInstance*i);

void s658retdec____wasm_apply_data_relocs(s658retdecInstance*i);

U32 s658retdec_func_1(s658retdecInstance*i);

void s658retdec_call_cb(s658retdecInstance*i,U32 l0);

void s658retdecInstantiate(s658retdecInstance* instance, void* resolve(const char* module, const char* name));

void s658retdecFreeInstance(s658retdecInstance* instance);

#endif /* s658retdec_H */

