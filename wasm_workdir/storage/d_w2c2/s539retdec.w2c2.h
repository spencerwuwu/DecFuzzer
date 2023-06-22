#ifndef s539retdec_H
#define s539retdec_H

#include "w2c2_base.h"

typedef struct s539retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s539retdecInstance;

void f0(s539retdecInstance*);

void f1(s539retdecInstance*);

U32 f2(s539retdecInstance*);

void f3(s539retdecInstance*,U32);

U32 f4(s539retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s539retdecInstance*,U32,U32,U32,U32,U32);

void f6(s539retdecInstance*,U32);

void f7(s539retdecInstance*,U32,U32,U32);

void f8(s539retdecInstance*,U32,U32,U32);

void s539retdec____wasm_call_ctors(s539retdecInstance*i);

void s539retdec____wasm_apply_data_relocs(s539retdecInstance*i);

U32 s539retdec_func_1(s539retdecInstance*i);

void s539retdec_call_cb(s539retdecInstance*i,U32 l0);

void s539retdecInstantiate(s539retdecInstance* instance, void* resolve(const char* module, const char* name));

void s539retdecFreeInstance(s539retdecInstance* instance);

#endif /* s539retdec_H */

