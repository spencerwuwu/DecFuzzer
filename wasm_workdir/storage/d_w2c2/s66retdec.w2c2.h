#ifndef s66retdec_H
#define s66retdec_H

#include "w2c2_base.h"

typedef struct s66retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s66retdecInstance;

void f0(s66retdecInstance*);

void f1(s66retdecInstance*);

U32 f2(s66retdecInstance*);

void f3(s66retdecInstance*,U32);

U32 f4(s66retdecInstance*,U32,U32,U32);

void f5(s66retdecInstance*,U32,U32,U32,U32,U32);

void f6(s66retdecInstance*,U32);

void f7(s66retdecInstance*,U32,U32,U32);

void f8(s66retdecInstance*,U32,U32,U32);

void s66retdec____wasm_call_ctors(s66retdecInstance*i);

void s66retdec____wasm_apply_data_relocs(s66retdecInstance*i);

U32 s66retdec_func_1(s66retdecInstance*i);

void s66retdec_call_cb(s66retdecInstance*i,U32 l0);

void s66retdecInstantiate(s66retdecInstance* instance, void* resolve(const char* module, const char* name));

void s66retdecFreeInstance(s66retdecInstance* instance);

#endif /* s66retdec_H */
