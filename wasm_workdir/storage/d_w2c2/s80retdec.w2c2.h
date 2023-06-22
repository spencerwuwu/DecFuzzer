#ifndef s80retdec_H
#define s80retdec_H

#include "w2c2_base.h"

typedef struct s80retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s80retdecInstance;

void f0(s80retdecInstance*);

void f1(s80retdecInstance*);

U32 f2(s80retdecInstance*);

void f3(s80retdecInstance*,U32);

U32 f4(s80retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s80retdecInstance*,U32,U32,U32,U32,U32);

void f6(s80retdecInstance*,U32);

void f7(s80retdecInstance*,U32,U32,U32);

void f8(s80retdecInstance*,U32,U32,U32);

void s80retdec____wasm_call_ctors(s80retdecInstance*i);

void s80retdec____wasm_apply_data_relocs(s80retdecInstance*i);

U32 s80retdec_func_1(s80retdecInstance*i);

void s80retdec_call_cb(s80retdecInstance*i,U32 l0);

void s80retdecInstantiate(s80retdecInstance* instance, void* resolve(const char* module, const char* name));

void s80retdecFreeInstance(s80retdecInstance* instance);

#endif /* s80retdec_H */

