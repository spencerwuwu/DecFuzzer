#ifndef s305retdec_H
#define s305retdec_H

#include "w2c2_base.h"

typedef struct s305retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s305retdecInstance;

void f0(s305retdecInstance*);

void f1(s305retdecInstance*);

U32 f2(s305retdecInstance*);

void f3(s305retdecInstance*,U32);

U32 f4(s305retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s305retdecInstance*,U32,U32,U32,U32,U32);

void f6(s305retdecInstance*,U32);

void f7(s305retdecInstance*,U32,U32,U32);

void f8(s305retdecInstance*,U32,U32,U32);

void s305retdec____wasm_call_ctors(s305retdecInstance*i);

void s305retdec____wasm_apply_data_relocs(s305retdecInstance*i);

U32 s305retdec_func_1(s305retdecInstance*i);

void s305retdec_call_cb(s305retdecInstance*i,U32 l0);

void s305retdecInstantiate(s305retdecInstance* instance, void* resolve(const char* module, const char* name));

void s305retdecFreeInstance(s305retdecInstance* instance);

#endif /* s305retdec_H */

