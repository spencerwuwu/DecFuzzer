#ifndef s367retdec_H
#define s367retdec_H

#include "w2c2_base.h"

typedef struct s367retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s367retdecInstance;

void f0(s367retdecInstance*);

void f1(s367retdecInstance*);

U32 f2(s367retdecInstance*);

void f3(s367retdecInstance*,U32);

U32 f4(s367retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s367retdecInstance*,U32,U32,U32,U32,U32);

void f6(s367retdecInstance*,U32);

void f7(s367retdecInstance*,U32,U32,U32);

void f8(s367retdecInstance*,U32,U32,U32);

void s367retdec____wasm_call_ctors(s367retdecInstance*i);

void s367retdec____wasm_apply_data_relocs(s367retdecInstance*i);

U32 s367retdec_func_1(s367retdecInstance*i);

void s367retdec_call_cb(s367retdecInstance*i,U32 l0);

void s367retdecInstantiate(s367retdecInstance* instance, void* resolve(const char* module, const char* name));

void s367retdecFreeInstance(s367retdecInstance* instance);

#endif /* s367retdec_H */

