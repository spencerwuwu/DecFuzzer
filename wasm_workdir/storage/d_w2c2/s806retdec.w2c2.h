#ifndef s806retdec_H
#define s806retdec_H

#include "w2c2_base.h"

typedef struct s806retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s806retdecInstance;

void f0(s806retdecInstance*);

void f1(s806retdecInstance*);

U32 f2(s806retdecInstance*);

void f3(s806retdecInstance*,U32);

U32 f4(s806retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s806retdecInstance*,U32,U32,U32,U32,U32);

void f6(s806retdecInstance*,U32);

void f7(s806retdecInstance*,U32,U32,U32);

void f8(s806retdecInstance*,U32,U32,U32);

void s806retdec____wasm_call_ctors(s806retdecInstance*i);

void s806retdec____wasm_apply_data_relocs(s806retdecInstance*i);

U32 s806retdec_func_1(s806retdecInstance*i);

void s806retdec_call_cb(s806retdecInstance*i,U32 l0);

void s806retdecInstantiate(s806retdecInstance* instance, void* resolve(const char* module, const char* name));

void s806retdecFreeInstance(s806retdecInstance* instance);

#endif /* s806retdec_H */

