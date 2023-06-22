#ifndef s86retdec_H
#define s86retdec_H

#include "w2c2_base.h"

typedef struct s86retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s86retdecInstance;

void f0(s86retdecInstance*);

void f1(s86retdecInstance*);

U32 f2(s86retdecInstance*);

void f3(s86retdecInstance*,U32);

void f4(s86retdecInstance*,U32);

void s86retdec____wasm_call_ctors(s86retdecInstance*i);

void s86retdec____wasm_apply_data_relocs(s86retdecInstance*i);

U32 s86retdec_func_1(s86retdecInstance*i);

void s86retdec_call_cb(s86retdecInstance*i,U32 l0);

void s86retdecInstantiate(s86retdecInstance* instance, void* resolve(const char* module, const char* name));

void s86retdecFreeInstance(s86retdecInstance* instance);

#endif /* s86retdec_H */

