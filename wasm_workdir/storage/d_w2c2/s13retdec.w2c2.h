#ifndef s13retdec_H
#define s13retdec_H

#include "w2c2_base.h"

typedef struct s13retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s13retdecInstance;

void f0(s13retdecInstance*);

void f1(s13retdecInstance*);

U32 f2(s13retdecInstance*);

void f3(s13retdecInstance*,U32);

U32 f4(s13retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s13retdecInstance*,U32,U32,U32,U32,U32);

void f6(s13retdecInstance*,U32);

void f7(s13retdecInstance*,U32,U32,U32);

void f8(s13retdecInstance*,U32,U32,U32);

void s13retdec____wasm_call_ctors(s13retdecInstance*i);

void s13retdec____wasm_apply_data_relocs(s13retdecInstance*i);

U32 s13retdec_func_1(s13retdecInstance*i);

void s13retdec_call_cb(s13retdecInstance*i,U32 l0);

void s13retdecInstantiate(s13retdecInstance* instance, void* resolve(const char* module, const char* name));

void s13retdecFreeInstance(s13retdecInstance* instance);

#endif /* s13retdec_H */

