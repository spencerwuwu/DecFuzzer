#ifndef s661retdec_H
#define s661retdec_H

#include "w2c2_base.h"

typedef struct s661retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s661retdecInstance;

void f0(s661retdecInstance*);

void f1(s661retdecInstance*);

U32 f2(s661retdecInstance*);

void f3(s661retdecInstance*,U32);

void f4(s661retdecInstance*,U32);

void s661retdec____wasm_call_ctors(s661retdecInstance*i);

void s661retdec____wasm_apply_data_relocs(s661retdecInstance*i);

U32 s661retdec_func_1(s661retdecInstance*i);

void s661retdec_call_cb(s661retdecInstance*i,U32 l0);

void s661retdecInstantiate(s661retdecInstance* instance, void* resolve(const char* module, const char* name));

void s661retdecFreeInstance(s661retdecInstance* instance);

#endif /* s661retdec_H */

