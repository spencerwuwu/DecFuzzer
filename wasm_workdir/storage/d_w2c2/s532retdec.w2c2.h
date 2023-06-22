#ifndef s532retdec_H
#define s532retdec_H

#include "w2c2_base.h"

typedef struct s532retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s532retdecInstance;

void f0(s532retdecInstance*);

void f1(s532retdecInstance*);

U32 f2(s532retdecInstance*);

void f3(s532retdecInstance*,U32);

U32 f4(s532retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s532retdecInstance*,U32,U32,U32,U32,U32);

void f6(s532retdecInstance*,U32);

void f7(s532retdecInstance*,U32,U32,U32);

void f8(s532retdecInstance*,U32,U32,U32);

void s532retdec____wasm_call_ctors(s532retdecInstance*i);

void s532retdec____wasm_apply_data_relocs(s532retdecInstance*i);

U32 s532retdec_func_1(s532retdecInstance*i);

void s532retdec_call_cb(s532retdecInstance*i,U32 l0);

void s532retdecInstantiate(s532retdecInstance* instance, void* resolve(const char* module, const char* name));

void s532retdecFreeInstance(s532retdecInstance* instance);

#endif /* s532retdec_H */

