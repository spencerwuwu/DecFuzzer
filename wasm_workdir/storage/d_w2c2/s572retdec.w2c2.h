#ifndef s572retdec_H
#define s572retdec_H

#include "w2c2_base.h"

typedef struct s572retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s572retdecInstance;

void f0(s572retdecInstance*);

void f1(s572retdecInstance*);

U32 f2(s572retdecInstance*);

void f3(s572retdecInstance*,U32);

U32 f4(s572retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s572retdecInstance*,U32,U32,U32,U32,U32);

void f6(s572retdecInstance*,U32);

void f7(s572retdecInstance*,U32,U32,U32);

void f8(s572retdecInstance*,U32,U32,U32);

void s572retdec____wasm_call_ctors(s572retdecInstance*i);

void s572retdec____wasm_apply_data_relocs(s572retdecInstance*i);

U32 s572retdec_func_1(s572retdecInstance*i);

void s572retdec_call_cb(s572retdecInstance*i,U32 l0);

void s572retdecInstantiate(s572retdecInstance* instance, void* resolve(const char* module, const char* name));

void s572retdecFreeInstance(s572retdecInstance* instance);

#endif /* s572retdec_H */

