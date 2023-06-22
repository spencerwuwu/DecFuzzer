#ifndef s840retdec_H
#define s840retdec_H

#include "w2c2_base.h"

typedef struct s840retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s840retdecInstance;

void f0(s840retdecInstance*);

void f1(s840retdecInstance*);

U32 f2(s840retdecInstance*);

void f3(s840retdecInstance*,U32);

U32 f4(s840retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s840retdecInstance*,U32,U32,U32,U32,U32);

void f6(s840retdecInstance*,U32);

void f7(s840retdecInstance*,U32,U32,U32);

void f8(s840retdecInstance*,U32,U32,U32);

void s840retdec____wasm_call_ctors(s840retdecInstance*i);

void s840retdec____wasm_apply_data_relocs(s840retdecInstance*i);

U32 s840retdec_func_1(s840retdecInstance*i);

void s840retdec_call_cb(s840retdecInstance*i,U32 l0);

void s840retdecInstantiate(s840retdecInstance* instance, void* resolve(const char* module, const char* name));

void s840retdecFreeInstance(s840retdecInstance* instance);

#endif /* s840retdec_H */

