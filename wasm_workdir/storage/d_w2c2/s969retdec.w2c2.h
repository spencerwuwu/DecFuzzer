#ifndef s969retdec_H
#define s969retdec_H

#include "w2c2_base.h"

typedef struct s969retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s969retdecInstance;

void f0(s969retdecInstance*);

void f1(s969retdecInstance*);

U32 f2(s969retdecInstance*);

void f3(s969retdecInstance*,U32);

U32 f4(s969retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s969retdecInstance*,U32,U32,U32,U32,U32);

void f6(s969retdecInstance*,U32);

void f7(s969retdecInstance*,U32,U32,U32);

void f8(s969retdecInstance*,U32,U32,U32);

void s969retdec____wasm_call_ctors(s969retdecInstance*i);

void s969retdec____wasm_apply_data_relocs(s969retdecInstance*i);

U32 s969retdec_func_1(s969retdecInstance*i);

void s969retdec_call_cb(s969retdecInstance*i,U32 l0);

void s969retdecInstantiate(s969retdecInstance* instance, void* resolve(const char* module, const char* name));

void s969retdecFreeInstance(s969retdecInstance* instance);

#endif /* s969retdec_H */

