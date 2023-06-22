#ifndef s293retdec_H
#define s293retdec_H

#include "w2c2_base.h"

typedef struct s293retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s293retdecInstance;

void f0(s293retdecInstance*);

void f1(s293retdecInstance*);

U32 f2(s293retdecInstance*);

void f3(s293retdecInstance*,U32);

U32 f4(s293retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s293retdecInstance*,U32,U32,U32,U32,U32);

void f6(s293retdecInstance*,U32);

void f7(s293retdecInstance*,U32,U32,U32);

void f8(s293retdecInstance*,U32,U32,U32);

void s293retdec____wasm_call_ctors(s293retdecInstance*i);

void s293retdec____wasm_apply_data_relocs(s293retdecInstance*i);

U32 s293retdec_func_1(s293retdecInstance*i);

void s293retdec_call_cb(s293retdecInstance*i,U32 l0);

void s293retdecInstantiate(s293retdecInstance* instance, void* resolve(const char* module, const char* name));

void s293retdecFreeInstance(s293retdecInstance* instance);

#endif /* s293retdec_H */

