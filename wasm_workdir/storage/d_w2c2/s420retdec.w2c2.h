#ifndef s420retdec_H
#define s420retdec_H

#include "w2c2_base.h"

typedef struct s420retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s420retdecInstance;

void f0(s420retdecInstance*);

void f1(s420retdecInstance*);

U32 f2(s420retdecInstance*);

void f3(s420retdecInstance*,U32);

U32 f4(s420retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s420retdecInstance*,U32,U32,U32,U32,U32);

void f6(s420retdecInstance*,U32);

void f7(s420retdecInstance*,U32,U32,U32);

void f8(s420retdecInstance*,U32,U32,U32);

void s420retdec____wasm_call_ctors(s420retdecInstance*i);

void s420retdec____wasm_apply_data_relocs(s420retdecInstance*i);

U32 s420retdec_func_1(s420retdecInstance*i);

void s420retdec_call_cb(s420retdecInstance*i,U32 l0);

void s420retdecInstantiate(s420retdecInstance* instance, void* resolve(const char* module, const char* name));

void s420retdecFreeInstance(s420retdecInstance* instance);

#endif /* s420retdec_H */

