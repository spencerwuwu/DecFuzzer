#ifndef s186retdec_H
#define s186retdec_H

#include "w2c2_base.h"

typedef struct s186retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s186retdecInstance;

void f0(s186retdecInstance*);

void f1(s186retdecInstance*);

U32 f2(s186retdecInstance*);

void f3(s186retdecInstance*,U32);

U32 f4(s186retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s186retdecInstance*,U32,U32,U32,U32,U32);

void f6(s186retdecInstance*,U32);

void f7(s186retdecInstance*,U32,U32,U32);

void f8(s186retdecInstance*,U32,U32,U32);

void s186retdec____wasm_call_ctors(s186retdecInstance*i);

void s186retdec____wasm_apply_data_relocs(s186retdecInstance*i);

U32 s186retdec_func_1(s186retdecInstance*i);

void s186retdec_call_cb(s186retdecInstance*i,U32 l0);

void s186retdecInstantiate(s186retdecInstance* instance, void* resolve(const char* module, const char* name));

void s186retdecFreeInstance(s186retdecInstance* instance);

#endif /* s186retdec_H */

