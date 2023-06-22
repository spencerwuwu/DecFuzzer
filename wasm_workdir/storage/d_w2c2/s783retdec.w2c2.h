#ifndef s783retdec_H
#define s783retdec_H

#include "w2c2_base.h"

typedef struct s783retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s783retdecInstance;

void f0(s783retdecInstance*);

void f1(s783retdecInstance*);

U32 f2(s783retdecInstance*);

void f3(s783retdecInstance*,U32);

void f4(s783retdecInstance*,U32);

void s783retdec____wasm_call_ctors(s783retdecInstance*i);

void s783retdec____wasm_apply_data_relocs(s783retdecInstance*i);

U32 s783retdec_func_1(s783retdecInstance*i);

void s783retdec_call_cb(s783retdecInstance*i,U32 l0);

void s783retdecInstantiate(s783retdecInstance* instance, void* resolve(const char* module, const char* name));

void s783retdecFreeInstance(s783retdecInstance* instance);

#endif /* s783retdec_H */

