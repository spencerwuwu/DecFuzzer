#ifndef s914retdec_H
#define s914retdec_H

#include "w2c2_base.h"

typedef struct s914retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s914retdecInstance;

void f0(s914retdecInstance*);

void f1(s914retdecInstance*);

U32 f2(s914retdecInstance*);

void f3(s914retdecInstance*,U32);

U32 f4(s914retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s914retdecInstance*,U32,U32,U32,U32,U32);

void f6(s914retdecInstance*,U32);

void f7(s914retdecInstance*,U32,U32,U32);

void f8(s914retdecInstance*,U32,U32,U32);

void s914retdec____wasm_call_ctors(s914retdecInstance*i);

void s914retdec____wasm_apply_data_relocs(s914retdecInstance*i);

U32 s914retdec_func_1(s914retdecInstance*i);

void s914retdec_call_cb(s914retdecInstance*i,U32 l0);

void s914retdecInstantiate(s914retdecInstance* instance, void* resolve(const char* module, const char* name));

void s914retdecFreeInstance(s914retdecInstance* instance);

#endif /* s914retdec_H */

