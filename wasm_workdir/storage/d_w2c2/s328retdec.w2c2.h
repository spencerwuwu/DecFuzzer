#ifndef s328retdec_H
#define s328retdec_H

#include "w2c2_base.h"

typedef struct s328retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s328retdecInstance;

void f0(s328retdecInstance*);

void f1(s328retdecInstance*);

U32 f2(s328retdecInstance*);

void f3(s328retdecInstance*,U32);

U32 f4(s328retdecInstance*,U32,U32,U32,U32,U32);

void f5(s328retdecInstance*,U32,U32,U32,U32,U32);

void f6(s328retdecInstance*,U32);

void f7(s328retdecInstance*,U32,U32,U32);

void f8(s328retdecInstance*,U32,U32,U32);

void s328retdec____wasm_call_ctors(s328retdecInstance*i);

void s328retdec____wasm_apply_data_relocs(s328retdecInstance*i);

U32 s328retdec_func_1(s328retdecInstance*i);

void s328retdec_call_cb(s328retdecInstance*i,U32 l0);

void s328retdecInstantiate(s328retdecInstance* instance, void* resolve(const char* module, const char* name));

void s328retdecFreeInstance(s328retdecInstance* instance);

#endif /* s328retdec_H */

