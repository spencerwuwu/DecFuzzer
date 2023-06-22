#ifndef s921retdec_H
#define s921retdec_H

#include "w2c2_base.h"

typedef struct s921retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s921retdecInstance;

void f0(s921retdecInstance*);

void f1(s921retdecInstance*);

U32 f2(s921retdecInstance*);

void f3(s921retdecInstance*,U32);

U32 f4(s921retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s921retdecInstance*,U32,U32,U32,U32,U32);

void f6(s921retdecInstance*,U32);

void f7(s921retdecInstance*,U32,U32,U32);

void f8(s921retdecInstance*,U32,U32,U32);

void s921retdec____wasm_call_ctors(s921retdecInstance*i);

void s921retdec____wasm_apply_data_relocs(s921retdecInstance*i);

U32 s921retdec_func_1(s921retdecInstance*i);

void s921retdec_call_cb(s921retdecInstance*i,U32 l0);

void s921retdecInstantiate(s921retdecInstance* instance, void* resolve(const char* module, const char* name));

void s921retdecFreeInstance(s921retdecInstance* instance);

#endif /* s921retdec_H */

