#ifndef s17retdec_H
#define s17retdec_H

#include "w2c2_base.h"

typedef struct s17retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s17retdecInstance;

void f0(s17retdecInstance*);

void f1(s17retdecInstance*);

U32 f2(s17retdecInstance*);

void f3(s17retdecInstance*,U32);

U32 f4(s17retdecInstance*,U32,U32,U32,U32,U32);

void f5(s17retdecInstance*,U32,U32,U32,U32,U32);

void f6(s17retdecInstance*,U32);

void f7(s17retdecInstance*,U32,U32,U32);

void f8(s17retdecInstance*,U32,U32,U32);

void s17retdec____wasm_call_ctors(s17retdecInstance*i);

void s17retdec____wasm_apply_data_relocs(s17retdecInstance*i);

U32 s17retdec_func_1(s17retdecInstance*i);

void s17retdec_call_cb(s17retdecInstance*i,U32 l0);

void s17retdecInstantiate(s17retdecInstance* instance, void* resolve(const char* module, const char* name));

void s17retdecFreeInstance(s17retdecInstance* instance);

#endif /* s17retdec_H */

