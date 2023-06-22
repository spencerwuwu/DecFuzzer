#ifndef s59retdec_H
#define s59retdec_H

#include "w2c2_base.h"

typedef struct s59retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s59retdecInstance;

void f0(s59retdecInstance*);

void f1(s59retdecInstance*);

U32 f2(s59retdecInstance*);

void f3(s59retdecInstance*,U32);

U32 f4(s59retdecInstance*,U32,U32,U32);

void f5(s59retdecInstance*,U32,U32,U32,U32,U32);

void f6(s59retdecInstance*,U32);

void f7(s59retdecInstance*,U32,U32,U32);

void f8(s59retdecInstance*,U32,U32,U32);

void s59retdec____wasm_call_ctors(s59retdecInstance*i);

void s59retdec____wasm_apply_data_relocs(s59retdecInstance*i);

U32 s59retdec_func_1(s59retdecInstance*i);

void s59retdec_call_cb(s59retdecInstance*i,U32 l0);

void s59retdecInstantiate(s59retdecInstance* instance, void* resolve(const char* module, const char* name));

void s59retdecFreeInstance(s59retdecInstance* instance);

#endif /* s59retdec_H */

