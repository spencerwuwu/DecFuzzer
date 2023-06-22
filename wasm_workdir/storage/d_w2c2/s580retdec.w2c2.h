#ifndef s580retdec_H
#define s580retdec_H

#include "w2c2_base.h"

typedef struct s580retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s580retdecInstance;

void f0(s580retdecInstance*);

void f1(s580retdecInstance*);

U32 f2(s580retdecInstance*);

void f3(s580retdecInstance*,U32);

U32 f4(s580retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s580retdecInstance*,U32,U32,U32,U32,U32);

void f6(s580retdecInstance*,U32);

void f7(s580retdecInstance*,U32,U32,U32);

void f8(s580retdecInstance*,U32,U32,U32);

void s580retdec____wasm_call_ctors(s580retdecInstance*i);

void s580retdec____wasm_apply_data_relocs(s580retdecInstance*i);

U32 s580retdec_func_1(s580retdecInstance*i);

void s580retdec_call_cb(s580retdecInstance*i,U32 l0);

void s580retdecInstantiate(s580retdecInstance* instance, void* resolve(const char* module, const char* name));

void s580retdecFreeInstance(s580retdecInstance* instance);

#endif /* s580retdec_H */

