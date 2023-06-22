#ifndef s502retdec_H
#define s502retdec_H

#include "w2c2_base.h"

typedef struct s502retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s502retdecInstance;

void f0(s502retdecInstance*);

void f1(s502retdecInstance*);

U32 f2(s502retdecInstance*);

void f3(s502retdecInstance*,U32);

U32 f4(s502retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s502retdecInstance*,U32,U32,U32,U32,U32);

void f6(s502retdecInstance*,U32);

void f7(s502retdecInstance*,U32,U32,U32);

void f8(s502retdecInstance*,U32,U32,U32);

void s502retdec____wasm_call_ctors(s502retdecInstance*i);

void s502retdec____wasm_apply_data_relocs(s502retdecInstance*i);

U32 s502retdec_func_1(s502retdecInstance*i);

void s502retdec_call_cb(s502retdecInstance*i,U32 l0);

void s502retdecInstantiate(s502retdecInstance* instance, void* resolve(const char* module, const char* name));

void s502retdecFreeInstance(s502retdecInstance* instance);

#endif /* s502retdec_H */

