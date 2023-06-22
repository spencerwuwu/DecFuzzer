#ifndef s158retdec_H
#define s158retdec_H

#include "w2c2_base.h"

typedef struct s158retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s158retdecInstance;

void f0(s158retdecInstance*);

void f1(s158retdecInstance*);

U32 f2(s158retdecInstance*);

void f3(s158retdecInstance*,U32);

U32 f4(s158retdecInstance*,U32,U32,U32,U32);

void f5(s158retdecInstance*,U32,U32,U32,U32,U32);

void f6(s158retdecInstance*,U32);

void f7(s158retdecInstance*,U32,U32,U32);

void f8(s158retdecInstance*,U32,U32,U32);

void s158retdec____wasm_call_ctors(s158retdecInstance*i);

void s158retdec____wasm_apply_data_relocs(s158retdecInstance*i);

U32 s158retdec_func_1(s158retdecInstance*i);

void s158retdec_call_cb(s158retdecInstance*i,U32 l0);

void s158retdecInstantiate(s158retdecInstance* instance, void* resolve(const char* module, const char* name));

void s158retdecFreeInstance(s158retdecInstance* instance);

#endif /* s158retdec_H */

