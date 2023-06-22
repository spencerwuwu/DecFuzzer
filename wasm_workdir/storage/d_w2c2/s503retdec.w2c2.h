#ifndef s503retdec_H
#define s503retdec_H

#include "w2c2_base.h"

typedef struct s503retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s503retdecInstance;

void f0(s503retdecInstance*);

void f1(s503retdecInstance*);

U32 f2(s503retdecInstance*);

void f3(s503retdecInstance*,U32);

U32 f4(s503retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s503retdecInstance*,U32,U32,U32,U32,U32);

void f6(s503retdecInstance*,U32);

void f7(s503retdecInstance*,U32,U32,U32);

void f8(s503retdecInstance*,U32,U32,U32);

void s503retdec____wasm_call_ctors(s503retdecInstance*i);

void s503retdec____wasm_apply_data_relocs(s503retdecInstance*i);

U32 s503retdec_func_1(s503retdecInstance*i);

void s503retdec_call_cb(s503retdecInstance*i,U32 l0);

void s503retdecInstantiate(s503retdecInstance* instance, void* resolve(const char* module, const char* name));

void s503retdecFreeInstance(s503retdecInstance* instance);

#endif /* s503retdec_H */

