#ifndef s906retdec_H
#define s906retdec_H

#include "w2c2_base.h"

typedef struct s906retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s906retdecInstance;

void f0(s906retdecInstance*);

void f1(s906retdecInstance*);

U32 f2(s906retdecInstance*);

void f3(s906retdecInstance*,U32);

U32 f4(s906retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s906retdecInstance*,U32,U32,U32,U32,U32);

void f6(s906retdecInstance*,U32);

void f7(s906retdecInstance*,U32,U32,U32);

void f8(s906retdecInstance*,U32,U32,U32);

void s906retdec____wasm_call_ctors(s906retdecInstance*i);

void s906retdec____wasm_apply_data_relocs(s906retdecInstance*i);

U32 s906retdec_func_1(s906retdecInstance*i);

void s906retdec_call_cb(s906retdecInstance*i,U32 l0);

void s906retdecInstantiate(s906retdecInstance* instance, void* resolve(const char* module, const char* name));

void s906retdecFreeInstance(s906retdecInstance* instance);

#endif /* s906retdec_H */

