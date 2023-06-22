#ifndef s960retdec_H
#define s960retdec_H

#include "w2c2_base.h"

typedef struct s960retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s960retdecInstance;

void f0(s960retdecInstance*);

void f1(s960retdecInstance*);

U32 f2(s960retdecInstance*);

void f3(s960retdecInstance*,U32);

U32 f4(s960retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s960retdecInstance*,U32,U32,U32,U32,U32);

void f6(s960retdecInstance*,U32);

void f7(s960retdecInstance*,U32,U32,U32);

void f8(s960retdecInstance*,U32,U32,U32);

void s960retdec____wasm_call_ctors(s960retdecInstance*i);

void s960retdec____wasm_apply_data_relocs(s960retdecInstance*i);

U32 s960retdec_func_1(s960retdecInstance*i);

void s960retdec_call_cb(s960retdecInstance*i,U32 l0);

void s960retdecInstantiate(s960retdecInstance* instance, void* resolve(const char* module, const char* name));

void s960retdecFreeInstance(s960retdecInstance* instance);

#endif /* s960retdec_H */

