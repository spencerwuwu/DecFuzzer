#ifndef s162retdec_H
#define s162retdec_H

#include "w2c2_base.h"

typedef struct s162retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s162retdecInstance;

void f0(s162retdecInstance*);

void f1(s162retdecInstance*);

U32 f2(s162retdecInstance*);

void f3(s162retdecInstance*,U32);

U32 f4(s162retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s162retdecInstance*,U32,U32,U32,U32,U32);

void f6(s162retdecInstance*,U32);

void f7(s162retdecInstance*,U32,U32,U32);

void f8(s162retdecInstance*,U32,U32,U32);

void s162retdec____wasm_call_ctors(s162retdecInstance*i);

void s162retdec____wasm_apply_data_relocs(s162retdecInstance*i);

U32 s162retdec_func_1(s162retdecInstance*i);

void s162retdec_call_cb(s162retdecInstance*i,U32 l0);

void s162retdecInstantiate(s162retdecInstance* instance, void* resolve(const char* module, const char* name));

void s162retdecFreeInstance(s162retdecInstance* instance);

#endif /* s162retdec_H */

