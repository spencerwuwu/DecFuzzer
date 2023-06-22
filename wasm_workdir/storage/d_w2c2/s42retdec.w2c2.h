#ifndef s42retdec_H
#define s42retdec_H

#include "w2c2_base.h"

typedef struct s42retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s42retdecInstance;

void f0(s42retdecInstance*);

void f1(s42retdecInstance*);

U32 f2(s42retdecInstance*);

void f3(s42retdecInstance*,U32);

U32 f4(s42retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s42retdecInstance*,U32,U32,U32,U32,U32);

void f6(s42retdecInstance*,U32);

void f7(s42retdecInstance*,U32,U32,U32);

void f8(s42retdecInstance*,U32,U32,U32);

void s42retdec____wasm_call_ctors(s42retdecInstance*i);

void s42retdec____wasm_apply_data_relocs(s42retdecInstance*i);

U32 s42retdec_func_1(s42retdecInstance*i);

void s42retdec_call_cb(s42retdecInstance*i,U32 l0);

void s42retdecInstantiate(s42retdecInstance* instance, void* resolve(const char* module, const char* name));

void s42retdecFreeInstance(s42retdecInstance* instance);

#endif /* s42retdec_H */

