#ifndef s306retdec_H
#define s306retdec_H

#include "w2c2_base.h"

typedef struct s306retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s306retdecInstance;

void f0(s306retdecInstance*);

void f1(s306retdecInstance*);

U32 f2(s306retdecInstance*);

void f3(s306retdecInstance*,U32);

U32 f4(s306retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s306retdecInstance*,U32,U32,U32,U32,U32);

void f6(s306retdecInstance*,U32);

void f7(s306retdecInstance*,U32,U32,U32);

void f8(s306retdecInstance*,U32,U32,U32);

void s306retdec____wasm_call_ctors(s306retdecInstance*i);

void s306retdec____wasm_apply_data_relocs(s306retdecInstance*i);

U32 s306retdec_func_1(s306retdecInstance*i);

void s306retdec_call_cb(s306retdecInstance*i,U32 l0);

void s306retdecInstantiate(s306retdecInstance* instance, void* resolve(const char* module, const char* name));

void s306retdecFreeInstance(s306retdecInstance* instance);

#endif /* s306retdec_H */

