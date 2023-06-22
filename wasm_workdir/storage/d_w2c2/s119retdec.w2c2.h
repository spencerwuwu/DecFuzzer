#ifndef s119retdec_H
#define s119retdec_H

#include "w2c2_base.h"

typedef struct s119retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s119retdecInstance;

void f0(s119retdecInstance*);

void f1(s119retdecInstance*);

U32 f2(s119retdecInstance*);

void f3(s119retdecInstance*,U32);

U32 f4(s119retdecInstance*,U32,U32,U32,U32,U32);

void f5(s119retdecInstance*,U32,U32,U32,U32,U32);

void f6(s119retdecInstance*,U32);

void f7(s119retdecInstance*,U32,U32,U32);

void f8(s119retdecInstance*,U32,U32,U32);

void s119retdec____wasm_call_ctors(s119retdecInstance*i);

void s119retdec____wasm_apply_data_relocs(s119retdecInstance*i);

U32 s119retdec_func_1(s119retdecInstance*i);

void s119retdec_call_cb(s119retdecInstance*i,U32 l0);

void s119retdecInstantiate(s119retdecInstance* instance, void* resolve(const char* module, const char* name));

void s119retdecFreeInstance(s119retdecInstance* instance);

#endif /* s119retdec_H */

