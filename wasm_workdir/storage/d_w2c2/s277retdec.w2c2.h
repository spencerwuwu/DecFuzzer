#ifndef s277retdec_H
#define s277retdec_H

#include "w2c2_base.h"

typedef struct s277retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s277retdecInstance;

void f0(s277retdecInstance*);

void f1(s277retdecInstance*);

U32 f2(s277retdecInstance*);

void f3(s277retdecInstance*,U32);

U32 f4(s277retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s277retdecInstance*,U32,U32,U32,U32,U32);

void f6(s277retdecInstance*,U32);

void f7(s277retdecInstance*,U32,U32,U32);

void f8(s277retdecInstance*,U32,U32,U32);

void s277retdec____wasm_call_ctors(s277retdecInstance*i);

void s277retdec____wasm_apply_data_relocs(s277retdecInstance*i);

U32 s277retdec_func_1(s277retdecInstance*i);

void s277retdec_call_cb(s277retdecInstance*i,U32 l0);

void s277retdecInstantiate(s277retdecInstance* instance, void* resolve(const char* module, const char* name));

void s277retdecFreeInstance(s277retdecInstance* instance);

#endif /* s277retdec_H */

