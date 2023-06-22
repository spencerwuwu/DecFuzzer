#ifndef s700retdec_H
#define s700retdec_H

#include "w2c2_base.h"

typedef struct s700retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s700retdecInstance;

void f0(s700retdecInstance*);

void f1(s700retdecInstance*);

U32 f2(s700retdecInstance*);

void f3(s700retdecInstance*,U32);

U32 f4(s700retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s700retdecInstance*,U32,U32,U32,U32,U32);

void f6(s700retdecInstance*,U32);

void f7(s700retdecInstance*,U32,U32,U32);

void f8(s700retdecInstance*,U32,U32,U32);

void s700retdec____wasm_call_ctors(s700retdecInstance*i);

void s700retdec____wasm_apply_data_relocs(s700retdecInstance*i);

U32 s700retdec_func_1(s700retdecInstance*i);

void s700retdec_call_cb(s700retdecInstance*i,U32 l0);

void s700retdecInstantiate(s700retdecInstance* instance, void* resolve(const char* module, const char* name));

void s700retdecFreeInstance(s700retdecInstance* instance);

#endif /* s700retdec_H */

