#ifndef s216retdec_H
#define s216retdec_H

#include "w2c2_base.h"

typedef struct s216retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s216retdecInstance;

void f0(s216retdecInstance*);

void f1(s216retdecInstance*);

U32 f2(s216retdecInstance*);

void f3(s216retdecInstance*,U32);

U32 f4(s216retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s216retdecInstance*,U32,U32,U32,U32,U32);

void f6(s216retdecInstance*,U32);

void f7(s216retdecInstance*,U32,U32,U32);

void f8(s216retdecInstance*,U32,U32,U32);

void s216retdec____wasm_call_ctors(s216retdecInstance*i);

void s216retdec____wasm_apply_data_relocs(s216retdecInstance*i);

U32 s216retdec_func_1(s216retdecInstance*i);

void s216retdec_call_cb(s216retdecInstance*i,U32 l0);

void s216retdecInstantiate(s216retdecInstance* instance, void* resolve(const char* module, const char* name));

void s216retdecFreeInstance(s216retdecInstance* instance);

#endif /* s216retdec_H */

