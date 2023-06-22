#ifndef s859retdec_H
#define s859retdec_H

#include "w2c2_base.h"

typedef struct s859retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s859retdecInstance;

void f0(s859retdecInstance*);

void f1(s859retdecInstance*);

U32 f2(s859retdecInstance*);

void f3(s859retdecInstance*,U32);

U32 f4(s859retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s859retdecInstance*,U32,U32,U32,U32,U32);

void f6(s859retdecInstance*,U32);

void f7(s859retdecInstance*,U32,U32,U32);

void f8(s859retdecInstance*,U32,U32,U32);

void s859retdec____wasm_call_ctors(s859retdecInstance*i);

void s859retdec____wasm_apply_data_relocs(s859retdecInstance*i);

U32 s859retdec_func_1(s859retdecInstance*i);

void s859retdec_call_cb(s859retdecInstance*i,U32 l0);

void s859retdecInstantiate(s859retdecInstance* instance, void* resolve(const char* module, const char* name));

void s859retdecFreeInstance(s859retdecInstance* instance);

#endif /* s859retdec_H */

