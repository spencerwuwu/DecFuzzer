#ifndef s442retdec_H
#define s442retdec_H

#include "w2c2_base.h"

typedef struct s442retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s442retdecInstance;

void f0(s442retdecInstance*);

void f1(s442retdecInstance*);

U32 f2(s442retdecInstance*);

void f3(s442retdecInstance*,U32);

U32 f4(s442retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s442retdecInstance*,U32,U32,U32,U32,U32);

void f6(s442retdecInstance*,U32);

void f7(s442retdecInstance*,U32,U32,U32);

void f8(s442retdecInstance*,U32,U32,U32);

void s442retdec____wasm_call_ctors(s442retdecInstance*i);

void s442retdec____wasm_apply_data_relocs(s442retdecInstance*i);

U32 s442retdec_func_1(s442retdecInstance*i);

void s442retdec_call_cb(s442retdecInstance*i,U32 l0);

void s442retdecInstantiate(s442retdecInstance* instance, void* resolve(const char* module, const char* name));

void s442retdecFreeInstance(s442retdecInstance* instance);

#endif /* s442retdec_H */

