#ifndef s137retdec_H
#define s137retdec_H

#include "w2c2_base.h"

typedef struct s137retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s137retdecInstance;

void f0(s137retdecInstance*);

void f1(s137retdecInstance*);

U32 f2(s137retdecInstance*);

void f3(s137retdecInstance*,U32);

U32 f4(s137retdecInstance*,U32,U32,U32);

void f5(s137retdecInstance*,U32,U32,U32,U32,U32);

void f6(s137retdecInstance*,U32);

void f7(s137retdecInstance*,U32,U32,U32);

void f8(s137retdecInstance*,U32,U32,U32);

void s137retdec____wasm_call_ctors(s137retdecInstance*i);

void s137retdec____wasm_apply_data_relocs(s137retdecInstance*i);

U32 s137retdec_func_1(s137retdecInstance*i);

void s137retdec_call_cb(s137retdecInstance*i,U32 l0);

void s137retdecInstantiate(s137retdecInstance* instance, void* resolve(const char* module, const char* name));

void s137retdecFreeInstance(s137retdecInstance* instance);

#endif /* s137retdec_H */

