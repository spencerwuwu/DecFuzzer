#ifndef s149retdec_H
#define s149retdec_H

#include "w2c2_base.h"

typedef struct s149retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s149retdecInstance;

void f0(s149retdecInstance*);

void f1(s149retdecInstance*);

U32 f2(s149retdecInstance*);

void f3(s149retdecInstance*,U32);

U32 f4(s149retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s149retdecInstance*,U32,U32,U32,U32,U32);

void f6(s149retdecInstance*,U32);

void f7(s149retdecInstance*,U32,U32,U32);

void f8(s149retdecInstance*,U32,U32,U32);

void s149retdec____wasm_call_ctors(s149retdecInstance*i);

void s149retdec____wasm_apply_data_relocs(s149retdecInstance*i);

U32 s149retdec_func_1(s149retdecInstance*i);

void s149retdec_call_cb(s149retdecInstance*i,U32 l0);

void s149retdecInstantiate(s149retdecInstance* instance, void* resolve(const char* module, const char* name));

void s149retdecFreeInstance(s149retdecInstance* instance);

#endif /* s149retdec_H */

