#ifndef s263retdec_H
#define s263retdec_H

#include "w2c2_base.h"

typedef struct s263retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s263retdecInstance;

void f0(s263retdecInstance*);

void f1(s263retdecInstance*);

U32 f2(s263retdecInstance*);

void f3(s263retdecInstance*,U32);

U32 f4(s263retdecInstance*,U32,U32,U32,U32,U32);

void f5(s263retdecInstance*,U32,U32,U32,U32,U32);

void f6(s263retdecInstance*,U32);

void f7(s263retdecInstance*,U32,U32,U32);

void f8(s263retdecInstance*,U32,U32,U32);

void s263retdec____wasm_call_ctors(s263retdecInstance*i);

void s263retdec____wasm_apply_data_relocs(s263retdecInstance*i);

U32 s263retdec_func_1(s263retdecInstance*i);

void s263retdec_call_cb(s263retdecInstance*i,U32 l0);

void s263retdecInstantiate(s263retdecInstance* instance, void* resolve(const char* module, const char* name));

void s263retdecFreeInstance(s263retdecInstance* instance);

#endif /* s263retdec_H */

