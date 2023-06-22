#ifndef s752retdec_H
#define s752retdec_H

#include "w2c2_base.h"

typedef struct s752retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s752retdecInstance;

void f0(s752retdecInstance*);

void f1(s752retdecInstance*);

U32 f2(s752retdecInstance*);

void f3(s752retdecInstance*,U32);

U32 f4(s752retdecInstance*,U32,U32,U32);

void f5(s752retdecInstance*,U32,U32,U32,U32,U32);

void f6(s752retdecInstance*,U32);

void f7(s752retdecInstance*,U32,U32,U32);

void f8(s752retdecInstance*,U32,U32,U32);

void s752retdec____wasm_call_ctors(s752retdecInstance*i);

void s752retdec____wasm_apply_data_relocs(s752retdecInstance*i);

U32 s752retdec_func_1(s752retdecInstance*i);

void s752retdec_call_cb(s752retdecInstance*i,U32 l0);

void s752retdecInstantiate(s752retdecInstance* instance, void* resolve(const char* module, const char* name));

void s752retdecFreeInstance(s752retdecInstance* instance);

#endif /* s752retdec_H */

