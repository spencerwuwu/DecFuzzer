#ifndef s470retdec_H
#define s470retdec_H

#include "w2c2_base.h"

typedef struct s470retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s470retdecInstance;

void f0(s470retdecInstance*);

void f1(s470retdecInstance*);

U32 f2(s470retdecInstance*);

void f3(s470retdecInstance*,U32);

U32 f4(s470retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s470retdecInstance*,U32,U32,U32,U32,U32);

void f6(s470retdecInstance*,U32);

void f7(s470retdecInstance*,U32,U32,U32);

void f8(s470retdecInstance*,U32,U32,U32);

void s470retdec____wasm_call_ctors(s470retdecInstance*i);

void s470retdec____wasm_apply_data_relocs(s470retdecInstance*i);

U32 s470retdec_func_1(s470retdecInstance*i);

void s470retdec_call_cb(s470retdecInstance*i,U32 l0);

void s470retdecInstantiate(s470retdecInstance* instance, void* resolve(const char* module, const char* name));

void s470retdecFreeInstance(s470retdecInstance* instance);

#endif /* s470retdec_H */

