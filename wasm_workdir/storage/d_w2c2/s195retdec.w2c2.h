#ifndef s195retdec_H
#define s195retdec_H

#include "w2c2_base.h"

typedef struct s195retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s195retdecInstance;

void f0(s195retdecInstance*);

void f1(s195retdecInstance*);

U32 f2(s195retdecInstance*);

void f3(s195retdecInstance*,U32);

U32 f4(s195retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s195retdecInstance*,U32,U32,U32,U32,U32);

void f6(s195retdecInstance*,U32);

void f7(s195retdecInstance*,U32,U32,U32);

void f8(s195retdecInstance*,U32,U32,U32);

void s195retdec____wasm_call_ctors(s195retdecInstance*i);

void s195retdec____wasm_apply_data_relocs(s195retdecInstance*i);

U32 s195retdec_func_1(s195retdecInstance*i);

void s195retdec_call_cb(s195retdecInstance*i,U32 l0);

void s195retdecInstantiate(s195retdecInstance* instance, void* resolve(const char* module, const char* name));

void s195retdecFreeInstance(s195retdecInstance* instance);

#endif /* s195retdec_H */

