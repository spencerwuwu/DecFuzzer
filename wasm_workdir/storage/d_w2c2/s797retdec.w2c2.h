#ifndef s797retdec_H
#define s797retdec_H

#include "w2c2_base.h"

typedef struct s797retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s797retdecInstance;

void f0(s797retdecInstance*);

void f1(s797retdecInstance*);

U32 f2(s797retdecInstance*);

void f3(s797retdecInstance*,U32);

U32 f4(s797retdecInstance*,U32,U32,U32,U32,U32);

void f5(s797retdecInstance*,U32,U32,U32,U32,U32);

void f6(s797retdecInstance*,U32);

void f7(s797retdecInstance*,U32,U32,U32);

void f8(s797retdecInstance*,U32,U32,U32);

void s797retdec____wasm_call_ctors(s797retdecInstance*i);

void s797retdec____wasm_apply_data_relocs(s797retdecInstance*i);

U32 s797retdec_func_1(s797retdecInstance*i);

void s797retdec_call_cb(s797retdecInstance*i,U32 l0);

void s797retdecInstantiate(s797retdecInstance* instance, void* resolve(const char* module, const char* name));

void s797retdecFreeInstance(s797retdecInstance* instance);

#endif /* s797retdec_H */

