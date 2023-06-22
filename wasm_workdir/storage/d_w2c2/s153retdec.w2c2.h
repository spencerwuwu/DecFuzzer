#ifndef s153retdec_H
#define s153retdec_H

#include "w2c2_base.h"

typedef struct s153retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s153retdecInstance;

void f0(s153retdecInstance*);

void f1(s153retdecInstance*);

U32 f2(s153retdecInstance*);

void f3(s153retdecInstance*,U32);

U32 f4(s153retdecInstance*,U32,U32,U32,U32,U32);

void f5(s153retdecInstance*,U32,U32,U32,U32,U32);

void f6(s153retdecInstance*,U32);

void f7(s153retdecInstance*,U32,U32,U32);

void f8(s153retdecInstance*,U32,U32,U32);

void s153retdec____wasm_call_ctors(s153retdecInstance*i);

void s153retdec____wasm_apply_data_relocs(s153retdecInstance*i);

U32 s153retdec_func_1(s153retdecInstance*i);

void s153retdec_call_cb(s153retdecInstance*i,U32 l0);

void s153retdecInstantiate(s153retdecInstance* instance, void* resolve(const char* module, const char* name));

void s153retdecFreeInstance(s153retdecInstance* instance);

#endif /* s153retdec_H */

