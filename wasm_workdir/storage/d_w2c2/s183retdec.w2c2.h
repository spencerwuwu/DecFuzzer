#ifndef s183retdec_H
#define s183retdec_H

#include "w2c2_base.h"

typedef struct s183retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s183retdecInstance;

void f0(s183retdecInstance*);

void f1(s183retdecInstance*);

U32 f2(s183retdecInstance*);

void f3(s183retdecInstance*,U32);

U32 f4(s183retdecInstance*,U32,U32,U32,U32,U32);

void f5(s183retdecInstance*,U32,U32,U32,U32,U32);

void f6(s183retdecInstance*,U32);

void f7(s183retdecInstance*,U32,U32,U32);

void f8(s183retdecInstance*,U32,U32,U32);

void s183retdec____wasm_call_ctors(s183retdecInstance*i);

void s183retdec____wasm_apply_data_relocs(s183retdecInstance*i);

U32 s183retdec_func_1(s183retdecInstance*i);

void s183retdec_call_cb(s183retdecInstance*i,U32 l0);

void s183retdecInstantiate(s183retdecInstance* instance, void* resolve(const char* module, const char* name));

void s183retdecFreeInstance(s183retdecInstance* instance);

#endif /* s183retdec_H */

