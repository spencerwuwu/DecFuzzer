#ifndef s993retdec_H
#define s993retdec_H

#include "w2c2_base.h"

typedef struct s993retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s993retdecInstance;

void f0(s993retdecInstance*);

void f1(s993retdecInstance*);

U32 f2(s993retdecInstance*);

void f3(s993retdecInstance*,U32);

U32 f4(s993retdecInstance*,U32,U32,U32,U32,U32);

void f5(s993retdecInstance*,U32,U32,U32,U32,U32);

void f6(s993retdecInstance*,U32);

void f7(s993retdecInstance*,U32,U32,U32);

void f8(s993retdecInstance*,U32,U32,U32);

void s993retdec____wasm_call_ctors(s993retdecInstance*i);

void s993retdec____wasm_apply_data_relocs(s993retdecInstance*i);

U32 s993retdec_func_1(s993retdecInstance*i);

void s993retdec_call_cb(s993retdecInstance*i,U32 l0);

void s993retdecInstantiate(s993retdecInstance* instance, void* resolve(const char* module, const char* name));

void s993retdecFreeInstance(s993retdecInstance* instance);

#endif /* s993retdec_H */

