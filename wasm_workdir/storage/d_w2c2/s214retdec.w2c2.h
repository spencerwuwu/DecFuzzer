#ifndef s214retdec_H
#define s214retdec_H

#include "w2c2_base.h"

typedef struct s214retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s214retdecInstance;

void f0(s214retdecInstance*);

void f1(s214retdecInstance*);

U32 f2(s214retdecInstance*);

void f3(s214retdecInstance*,U32);

U32 f4(s214retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s214retdecInstance*,U32,U32,U32,U32,U32);

void f6(s214retdecInstance*,U32);

void f7(s214retdecInstance*,U32,U32,U32);

void f8(s214retdecInstance*,U32,U32,U32);

void s214retdec____wasm_call_ctors(s214retdecInstance*i);

void s214retdec____wasm_apply_data_relocs(s214retdecInstance*i);

U32 s214retdec_func_1(s214retdecInstance*i);

void s214retdec_call_cb(s214retdecInstance*i,U32 l0);

void s214retdecInstantiate(s214retdecInstance* instance, void* resolve(const char* module, const char* name));

void s214retdecFreeInstance(s214retdecInstance* instance);

#endif /* s214retdec_H */

